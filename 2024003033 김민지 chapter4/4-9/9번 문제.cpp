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

    cout << "이름과 전화번호를 입력해 주세요\n";

    for (int i = 0; i < MAX_PEOPLE; i++) {
        string name, tel;
        cout << "사람 " << (i + 1) << " >> ";
        cin >> name >> tel;
        person[i].set(name, tel); 
    }

    cout << "모든 사람의 이름은 ";
    for (int i = 0; i < MAX_PEOPLE; i++) {
        cout << person[i].getName();
        if (i < MAX_PEOPLE - 1) {
            cout << " ";
        }
    }
    cout << "입니다." << endl;

    string searchName;
    cout << "전화번호 검색합니다. 이름을 입력하세요 >> ";
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < MAX_PEOPLE; i++) {
        if (person[i].getName() == searchName) {
            cout << "전화번호는 " << person[i].getTel() << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "전화번호가 없습니다." << endl;
    }

    delete[] person;  

    return 0;
}
