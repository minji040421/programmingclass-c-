#include <iostream>  
using namespace std;
#include<string> 
#include<cstdlib>
#include<ctime>

/*
//7번 문제
class SelectableRandom {
private:
	int n, rd;
public:
	SelectableRandom() {
		srand((unsigned)time(0));
	}
	int nextEven() {
		n = (rand() / 2) * 2;
		return n;
	}int nextOdd() {
		do {
			n = rand();
		} while (n % 2 == 0);
		return n;
	}
	int nextEvenInRange(int a, int b) {
		if (a % 2 == 0) a++;
		if (b % 2 == 0) b--;
		if (a > b)
			return -1;
		rd = a + (rand() % ((b - a) / 2 + 1)) * 2;
		return rd;
	}
	int nextOddInRange(int a, int b) {
		do {
			n = a + rand() % (b - a + 1);
		} while (n % 2 == 0);
		return n;
	}
};
int main() {
	SelectableRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextEven();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextOddInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;

	return 0;
}
*/