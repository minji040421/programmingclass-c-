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
            cout << "에스프레소를 드세요." << endl;
        }
        else {
            cout << "원료가 부족합니다." << endl;
        }
    }

    void selectAmericano() { 
        if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) {
            tong[0].consume(); 
            for (int i = 0; i < 2; i++) {
                tong[1].consume();
            }
            cout << "아메리카노를 드세요." << endl;
        }
        else {
            cout << "원료가 부족합니다." << endl;
        }
    }

    void selectSugarCoffee() { 
        if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 2) {
            tong[0].consume(); 
            for (int i = 0; i < 2; i++) {
                tong[1].consume(); 
            }
            tong[2].consume(); 
            cout << "설탕 커피를 드세요." << endl;
        }
        else {
            cout << "원료가 부족합니다." << endl;
        }
    }

    void show() { 
        cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
    }

    void run() { 
        int choice;
        while (true) {
            cout << "메뉴를 눌러주세요 (1: 에스프레소, 2: 아메리카노, 3: 설탕커피, 4: 잔량보기, 5: 채우기)>> ";
            cin >> choice;

            switch (choice) {
            case 1: selectEspresso(); break;
            case 2: selectAmericano(); break;
            case 3: selectSugarCoffee(); break;
            case 4: show(); break;
            case 5: fill(); show(); break;
            default: cout << "잘못된 선택입니다." << endl; break;
            }
        }
    }
};

int main() {
    cout << "***** 커피자판기를 작동합니다. *****\n";
    CoffeeVendingMachine machine;
    machine.fill();
    machine.run(); 

    return 0;
}
