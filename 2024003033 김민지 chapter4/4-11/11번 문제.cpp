#include <iostream>
#include <string>
using namespace std;

class Container {
    int size; 
public:
    Container() { size = 10; } 
    void fill() { size = 10; } 
    void consume() { if (size > 0) size--; } 
    int getSize() { return size; } 
};

class CoffeeVendingMachine {
    Container tong[3]; 
public:
    void fill() { 
        for (int i = 0; i < 3; i++) {
            tong[i].fill();
        }
    }

    void selectEspresso() { 
        if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1) {
            tong[0].consume(); 
            tong[1].consume(); 
            cout << "���������Ҹ� �弼��." << endl;
        }
        else {
            cout << "���ᰡ �����մϴ�." << endl;
        }
    }

    void selectAmericano() { 
        if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) {
            tong[0].consume(); 
            for (int i = 0; i < 2; i++) {
                tong[1].consume();
            }
            cout << "�Ƹ޸�ī�븦 �弼��." << endl;
        }
        else {
            cout << "���ᰡ �����մϴ�." << endl;
        }
    }

    void selectSugarCoffee() { 
        if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 2) {
            tong[0].consume(); 
            for (int i = 0; i < 2; i++) {
                tong[1].consume(); 
            }
            tong[2].consume(); 
            cout << "���� Ŀ�Ǹ� �弼��." << endl;
        }
        else {
            cout << "���ᰡ �����մϴ�." << endl;
        }
    }

    void show() { 
        cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
    }

    void run() { 
        int choice;
        while (true) {
            cout << "�޴��� �����ּ��� (1: ����������, 2: �Ƹ޸�ī��, 3: ����Ŀ��, 4: �ܷ�����, 5: ä���)>> ";
            cin >> choice;

            switch (choice) {
            case 1: selectEspresso(); break;
            case 2: selectAmericano(); break;
            case 3: selectSugarCoffee(); break;
            case 4: show(); break;
            case 5: fill(); show(); break;
            default: cout << "�߸��� �����Դϴ�." << endl; break;
            }
        }
    }
};

int main() {
    cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****\n";
    CoffeeVendingMachine machine;
    machine.fill();
    machine.run(); 

    return 0;
}
