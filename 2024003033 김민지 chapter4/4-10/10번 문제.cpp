#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    Person() {} 
    Person(string name) { this->name = name; }
    string getName() { return name; }
    void setName(string name) { this->name = name; } 
};

class Family {
    Person* p; 
    int size;  
    string familyName;
public:
    Family(string name, int size) {
        this->familyName = name;
        this->size = size;
        p = new Person[size]; // ���� �迭 �Ҵ�
    }

    void setName(int index, string name) {
        if (index >= 0 && index < size) {
            p[index].setName(name);
        }
    }

    void show() {
        cout << familyName << "������ ������ ���� " << size << "�� �Դϴ�." << endl;
        for (int i = 0; i < size; i++) {
            cout << p[i].getName() << "\t";
        }
        cout << endl;
    }

    ~Family() {
        delete[] p; 
    }
};

int main() {
    Family* simpson = new Family("Simpson", 3); 
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson; 
    return 0;
}
