#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Câu 1: Đổi 42 phút 42 giây ra giây
    int minutes = 42;
    int seconds = 42;
    int total_seconds = minutes * 60 + seconds;
    cout << "1. Tong so giay: " << total_seconds << " s" << endl;

    // Câu 2: Đổi 10 km ra mile (1 mile = 1.61 km)
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