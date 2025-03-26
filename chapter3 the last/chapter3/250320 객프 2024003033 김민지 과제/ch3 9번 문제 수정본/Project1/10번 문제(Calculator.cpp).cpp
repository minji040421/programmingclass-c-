#include <iostream>   
using namespace std;
#include<string>  
#include<cstdlib> 
#include<ctime> 
/*
//10번 문제 
//Calculator.cpp
// 클래스 선언부
class Add {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Sub {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Mul {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Div {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
// 클래스 구현부
void Add::setValue(int x, int y) {
    a = x;
    b = y;
}

int Add::calculate() {
    return a + b;
}

void Sub::setValue(int x, int y) {
    a = x;
    b = y;
}

int Sub::calculate() {
    return a - b;
}

void Mul::setValue(int x, int y) {
    a = x;
    b = y;
}

int Mul::calculate() {
    return a * b;
}

void Div::setValue(int x, int y) {
    a = x;
    b = y;
}

int Div::calculate() {
    return a / b;
}
int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;
    char op;
    int x, y;

    while (1) {
        cout << "두 정수와 연산자를 입력하세요>> ";
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
            cout << "잘못된 연산자\n";
        }
    }

    return 0;
}
*/