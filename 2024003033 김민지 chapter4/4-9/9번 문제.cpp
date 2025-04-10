#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    string tel;
public:
    Person() {}

    string getName() { return name; }
    string getTel() { return tel; }
    void set(string name, string tel) {
        this->name = name;
        this->tel = tel;
    }
};

int main() {
    const int MAX_PEOPLE = 3;
    Person* person = new Person[MAX_PEOPLE];  

    cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���\n";

    for (int i = 0; i < MAX_PEOPLE; i++) {
        string name, tel;
        cout << "��� " << (i + 1) << " >> ";
        cin >> name >> tel;
        person[i].set(name, tel); 
    }

    cout << "��� ����� �̸��� ";
    for (int i = 0; i < MAX_PEOPLE; i++) {
        cout << person[i].getName();
        if (i < MAX_PEOPLE - 1) {
            cout << " ";
        }
    }
    cout << "�Դϴ�." << endl;

    string searchName;
    cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ��� >> ";
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < MAX_PEOPLE; i++) {
        if (person[i].getName() == searchName) {
            cout << "��ȭ��ȣ�� " << person[i].getTel() << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "��ȭ��ȣ�� �����ϴ�." << endl;
    }

    delete[] person;  

    return 0;
}
