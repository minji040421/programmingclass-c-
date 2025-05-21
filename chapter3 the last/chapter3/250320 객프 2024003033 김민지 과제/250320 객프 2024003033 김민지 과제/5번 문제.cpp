#include <iostream>  
using namespace std;
#include<string> 
#include<cstdlib>
#include<ctime>

//5번 문제
/*
class Random {
private:
	int n,rd;
public:
	Random() {
		srand((unsigned)time(0));
	}
	int next() {
		n = rand();
		return n;
	}
	int nextInRange(int a, int b) {
		rd = a + rand() % (b - a + 1);
		return rd;
	}
};
int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;

	return 0;
}
*/
