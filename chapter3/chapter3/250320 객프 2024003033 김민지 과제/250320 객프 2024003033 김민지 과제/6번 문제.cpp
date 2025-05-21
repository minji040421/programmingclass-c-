#include <iostream>  
using namespace std;
#include<string> 
#include<cstdlib>
#include<ctime>

//6번 문제
/*
class EvenRandom {
private:
    int n, rd;
public:
    EvenRandom() { 
        srand((unsigned)time(0));
    }

    int next() {
        n = (rand() / 2) * 2;
        return n;  
    }

    int nextInRange(int a, int b) {
        if (a % 2 != 0) a++; 
        if (b % 2 != 0) b--; 
        if (a > b) 
            return -1; 
        rd = a + (rand() % ((b - a) / 2 + 1)) * 2;
        return rd;  
    }
};

int main() {
    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }

    cout << endl << endl << "-- 2에서 10까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 10);
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}
*/