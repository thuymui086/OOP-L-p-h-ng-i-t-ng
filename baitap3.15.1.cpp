#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

struct Rectangle {
    Point corner; // Góc dưới bên trái
    double width, height;
};

class Circle {
public:
    Point center;
    double radius;

    Circle(double cx, double cy, double r) {
        center = {cx, cy};
        radius = r;
    }

    // Kiểm tra điểm có nằm trong hình tròn không
    bool point_in_circle(Point p) {
        double dist = sqrt(pow(p.x - center.x, 2) + pow(p.y - center.y, 2));
        return dist <= radius;
    }

    // Kiểm tra toàn bộ hình chữ nhật có nằm trong hình tròn không
    bool rect_in_circle(Rectangle rect) {
        // Kiểm tra 4 đỉnh của hình chữ nhật
        Point p1 = rect.corner;
        Point p2 = {rect.corner.x + rect.width, rect.corner.y};
        Point p3 = {rect.corner.x, rect.corner.y + rect.height};
        Point p4 = {rect.corner.x + rect.width, rect.corner.y + rect.height};

        return point_in_circle(p1) && point_in_circle(p2) && 
               point_in_circle(p3) && point_in_circle(p4);
    }

    // Kiểm tra hình chữ nhật và hình tròn có chạm/đè nhau không
    bool rect_circle_overlap(Rectangle rect) {
        // Tìm điểm trên hình chữ nhật gần tâm hình tròn nhất
        double closestX = std::max(rect.corner.x, std::min(center.x, rect.corner.x + rect.width));
        double closestY = std::max(rect.corner.y, std::min(center.y, rect.corner.y + rect.height));

        double distanceX = center.x - closestX;
        double distanceY = center.y - closestY;

        return (pow(distanceX, 2) + pow(distanceY, 2)) <= pow(radius, 2);
    }





};
int main() {
    // Khởi tạo một hình tròn tâm (0,0) bán kính 5
    Circle c(0, 0, 5);

    // Khởi tạo một điểm
    Point p = {3, 3};

    // Chạy thử hàm kiểm tra
    if (c.point_in_circle(p)) {
        std::cout << "Diem p nam TRONG hinh tron!" << std::endl;
    } else {
        std::cout << "Diem p nam NGOAI hinh tron!" << std::endl;
    }

    return 0;
}