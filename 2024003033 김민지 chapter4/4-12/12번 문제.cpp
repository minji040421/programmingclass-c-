#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

class Circle {
    int radius;
    string name;
public:
    void setCircle(string name, int radius) {
        this->name = name;
        this->radius = radius;
    }

    double getArea() {
        return 3.14 * radius * radius;
    }

    string getName() {
        return name;
    }
};

class CircleManager {
    Circle* p;
    int size;
public:
    CircleManager(int size) {
        this->size = size;
        p = new Circle[size];

        for (int i = 0; i < size; i++) {
            string name;
            int radius;
            cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
            cin >> name >> radius;
            p[i].setCircle(name, radius);
        }
    }

    ~CircleManager() {
        delete[] p;
    }

    void searchByName() {
        string name;
        cout << "검색하고자 하는 원의 이름 >> ";
        cin >> name;

        for (int i = 0; i < size; i++) {
            if (p[i].getName() == name) {
                cout << name << "의 면적은 " << p[i].getArea() << endl;
                return;
            }
        }
        cout << "해당 이름을 가진 원이 없습니다." << endl;
    }

    void searchByMinArea() {
        int minArea;
        cout << "최소 면적을 정수로 입력하세요 >> ";
        cin >> minArea;

        cout << minArea << "보다 큰 원을 검색합니다." << endl;

        bool found = false;
        for (int i = 0; i < size; i++) {
            if (p[i].getArea() > minArea) {
                if (found) cout << ",";
                cout << p[i].getName() << "의 면적은 " << p[i].getArea();
                found = true;
            }
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "원의 개수 >> ";
    cin >> size;

    CircleManager manager(size);
    manager.searchByName();
    manager.searchByMinArea();

    return 0;
}
