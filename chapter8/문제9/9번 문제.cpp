#include<iostream>
#include "AirLine.h"
using namespace std;

int main() {
    AirlineBook* air = new AirlineBook();
    cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ� *****\n\n";
    air->start();
    delete air;
}