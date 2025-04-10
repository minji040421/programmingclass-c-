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
            cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
            cin >> name >> radius;
            p[i].setCircle(name, radius);
        }
    }

    ~CircleManager() {
        delete[] p;
    }

    void searchByName() {
        string name;
        cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
        cin >> name;

        for (int i = 0; i < size; i++) {
            if (p[i].getName() == name) {
                cout << name << "�� ������ " << p[i].getArea() << endl;
                return;
            }
        }
        cout << "�ش� �̸��� ���� ���� �����ϴ�." << endl;
    }

    void searchByMinArea() {
        int minArea;
        cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
        cin >> minArea;

        cout << minArea << "���� ū ���� �˻��մϴ�." << endl;

        bool found = false;
        for (int i = 0; i < size; i++) {
            if (p[i].getArea() > minArea) {
                if (found) cout << ",";
                cout << p[i].getName() << "�� ������ " << p[i].getArea();
                found = true;
            }
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "���� ���� >> ";
    cin >> size;

    CircleManager manager(size);
    manager.searchByName();
    manager.searchByMinArea();

    return 0;
}
