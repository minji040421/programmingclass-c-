#include<iostream>
//3번 문제

int main() {
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	std::cout << "1에서 10까지 더한 결과는 " << sum << "입니다.";

	return 0;
}
