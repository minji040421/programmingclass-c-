#include <iostream>  
using namespace std;
#include<string> 
#include<cstdlib>
#include<ctime>
#include "Ram.h"

//Ram.cpp
Ram::Ram() {
    size = 100 * 1024;
    for (int i = 0; i < size; i++) {
        mem[i] = 0;
    }
}

Ram::~Ram() {
    cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int address) {
    return mem[address];
}

void Ram::write(int address, char value) {
    mem[address] = value;
}