#include <iostream>   
using namespace std;
#include<string>  
#include<cstdlib> 
#include<ctime> 
#include "calculator.h"

//10�� ���� (2)
//main.cpp
int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;
    char op;
    int x, y;

    while (1) {
        cout << "�� ������ �����ڸ� �Է��ϼ���>> ";
        cin >> x >> y >> op;

        switch (op) {
        case '+':
            a.setValue(x, y);
            cout << a.calculate() << endl;
            break;
        case '-':
            s.setValue(x, y);
            cout << s.calculate() << endl;
            break;
        case '*':
            m.setValue(x, y);
            cout << m.calculate() << endl;
            break;
        case '/':
            d.setValue(x, y);
            cout << d.calculate() << endl;
            break;
        default:
            cout << "�߸��� ������\n";
        }
    }

    return 0;
}
