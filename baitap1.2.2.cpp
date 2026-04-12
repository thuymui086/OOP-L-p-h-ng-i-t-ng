#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //  Tính thể tích hình cầu bán kính r = 5
    // Cong thuc: V = 4/3 * pi * r^3
    double r = 5.0;
    double pi = M_PI; // Dung thu vien cmath
    double volume = (4.0/3.0) * pi * pow(r, 3);
    cout << "1. The tich hinh cau: " << volume << endl;

    // Tính tổng chi phí bán sỉ 60 cuốn sách
    // Gia bia $24.95, chiet khau 40%, ship $3 cuon dau, $0.75 cac cuon sau
    double cover_price = 24.95;
    double discounted_price = cover_price * 0.6; // 100% - 40% = 60%
    int n = 60;
    double total_cost = (discounted_price * n) + 3.0 + (0.75 * (n - 1));
    cout << "2. Tong chi phi ban si: $" << total_cost << endl;

    return 0;
}