import math


class Point:
    """Lớp Point đơn giản biểu diễn một điểm 2D."""

    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __repr__(self):
        return f"Point({self.x}, {self.y})"


class LineSegment:
    """Lớp biểu diễn đoạn thẳng trong mặt phẳng 2D.

    Hỗ trợ 4 cách khởi tạo qua *args:
      - LineSegment()                       → mặc định d1(8,5), d2(1,0)
      - LineSegment(Point, Point)           → từ 2 điểm (tham chiếu)
      - LineSegment(x1, y1, x2, y2)        → từ 4 tọa độ
      - LineSegment(LineSegment)            → sao chép sâu
    """

    def __init__(self, *args):
        if len(args) == 0:
            # Mặc định
            self.__d1 = Point(8, 5)
            self.__d2 = Point(1, 0)

        elif len(args) == 2 and isinstance(args[0], Point):
            # 2 Point → tham chiếu, KHÔNG tạo điểm mới
            self.__d1 = args[0]
            self.__d2 = args[1]

        elif len(args) == 4:
            # 4 tọa độ int → tạo 2 Point mới
            self.__d1 = Point(args[0], args[1])
            self.__d2 = Point(args[2], args[3])

        elif len(args) == 1 and isinstance(args[0], LineSegment):
            # Sao chép sâu → tạo Point mới hoàn toàn
            src = args[0]
            self.__d1 = Point(src.getD1().x, src.getD1().y)
            self.__d2 = Point(src.getD2().x, src.getD2().y)

        else:
            raise ValueError("Tham số không hợp lệ!")

    
    def getD1(self):
        return self.__d1

    def getD2(self):
        return self._d2
    def setD1(self, d1):
        self.__d1 = d1

    def setD2(self, d2):
        self.__d2 = d2
    def length(self):
        """Tính độ dài đoạn thẳng."""
        dx = self.__d1.x - self.__d2.x
        dy = self.__d1.y - self.__d2.y
        return math.sqrt(dx**2 + dy**2)

    def hienThi(self):
        """In thông tin đoạn thẳng."""
        print(f"LineSegment[{self.__d1} -> {self.__d2}]")



# 1) Hàm xây dựng mặc định
seg1 = LineSegment()
print("seg1 (mặc định):", end=" "); seg1.hienThi()
print(f"  Độ dài: {seg1.length():.2f}")

# 2) Hàm xây dựng từ 2 Point (tham chiếu — không tạo mới)
p1 = Point(0, 0)
p2 = Point(3, 4)
seg2 = LineSegment(p1, p2)
print("\nseg2 (2 Point):", end=" "); seg2.hienThi()
print(f"  Độ dài: {seg2.length():.2f}")

# Chứng minh tham chiếu: thay đổi p1 → seg2 cũng thay đổi
p1.x = 10
print("  Sau p1.x = 10:", end=" "); seg2.hienThi()

# 3) Hàm xây dựng từ 4 tọa độ
seg3 = LineSegment(2, 3, 6, 6)
print("\nseg3 (4 tọa độ):", end=" "); seg3.hienThi()
print(f"  Độ dài: {seg3.length():.2f}")

# 4) Hàm xây dựng sao chép (deep copy)
seg4 = LineSegment(seg3)
print("\nseg4 (copy seg3):", end=" "); seg4.hienThi()

# Chứng minh deep copy: thay đổi seg3 → seg4 không đổi
seg3.getD1().x = 99
print("  Sau seg3.d1.x = 99:")
print("    seg3:", end=" "); seg3.hienThi()
print("    seg4:", end=" "); seg4.hienThi()
print("    → seg4 không đổi (deep copy)")
