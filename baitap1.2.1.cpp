#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Câu 1: Đổi 42 phút 42 giây ra giây
    int minutes = 42;
    int seconds = 42;
    int total_seconds = minutes * 60 + seconds;
    cout << "1. Tong so giay: " << total_seconds << " s" << endl;

    // Câu 2: Đổi 10 km ra mile (1 mile = 1.61 km)#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Câu 1: Tính thể tích hình cầu bán kính r = 5
    // Cong thuc: V = 4/3 * pi * r^3
    double r = 5.0;
    double pi = M_PI; // Dung thu vien cmath
    double volume = (4.0/3.0) * pi * pow(r, 3);
    cout << "1. The tich hinh cau: " << volume << endl;

    // Câu 2: Tính tổng chi phí bán sỉ 60 cuốn sách
    // Gia bia $24.95, chiet khau 40%, ship $3 cuon dau, $0.75 cac cuon sau
    double cover_price = 24.95;
    double discounted_price = cover_price * 0.6; // 100% - 40% = 60%
    int n = 60;
    double total_cost = (discounted_price * n) + 3.0 + (0.75 * (n - 1));
    cout << "2. Tong chi phi ban si: $" << total_cost << endl;

    return 0;
}
    double km = 10.0;
    double miles = km / 1.61;
    cout << "2. 10 km bang: " << miles << " miles" << endl;

    // Câu 3: Tính average pace (phut/mile) và average speed (mile/hour)
    // Pace: thoi gian (phut) / quang duong (mile)
    double time_in_minutes = total_seconds / 60.0;
    double pace = time_in_minutes / miles;
    
    // Speed: quang duong (mile) / thoi gian (gio)
    double speed = miles / (time_in_minutes / 60.0);

    cout << "3. Average pace: " << pace << " phut/mile" << endl;
    cout << "   Average speed: " << speed << " miles/hour" << endl;

    return 0;
}