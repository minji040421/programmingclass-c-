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
    cout << "���� ���� >> ";
    cin >> numCircles;

    Circle* circles = new Circle[numCircles];  
    int count = 0;

    for (int i = 0; i < numCircles; i++) {
        int r;
        cout << "�� " << (i + 1) << "�� ������ >> ";
        cin >> r;
        circles[i].setRadius(r);
    }

    for (int i = 0; i < numCircles; i++) {
        double area = circles[i].getArea();
        cout << "�� " << (i + 1) << "�� ����: " << area << endl;

        if (area > 100) {
            count++;
        }
    }

    cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;

    delete[] circles;  

    return 0;
}
