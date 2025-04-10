#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h> 
using namespace std;

class Circle {
    int radius;
public:
    void setRadius(int r) {
        radius = r;
    }

    double getArea() {
        return M_PI * radius * radius;
    }
};

int main() {
    int numCircles;
    cout << "원의 개수 >> ";
    cin >> numCircles;

    Circle* circles = new Circle[numCircles];  
    int count = 0;

    for (int i = 0; i < numCircles; i++) {
        int r;
        cout << "원 " << (i + 1) << "의 반지름 >> ";
        cin >> r;
        circles[i].setRadius(r);
    }

    for (int i = 0; i < numCircles; i++) {
        double area = circles[i].getArea();
        cout << "원 " << (i + 1) << "의 면적: " << area << endl;

        if (area > 100) {
            count++;
        }
    }

    cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

    delete[] circles;  

    return 0;
}
