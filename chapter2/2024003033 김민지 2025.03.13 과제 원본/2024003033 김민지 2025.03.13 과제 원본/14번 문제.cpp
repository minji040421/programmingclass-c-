#include <iostream>
using namespace std;
#include <cstring>
#include <string>
#include<cstdlib>

//14번 문제
/*
int main() {
	char coffee[100];
	int num;
	int sum = 0;
	int plus = 0;
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	while (sum < 20000) {
		cout << "주문>>  ";
		cin >> coffee >> num;
		if (strcmp(coffee, "에스프레소") == 0) {
			plus = num * 2000;
			sum += plus;
			cout << plus << "원입니다. 맛있게 드세요.\n";
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			plus = num * 2300;
			sum += plus;
			cout << plus << "원입니다. 맛있게 드세요.\n";
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			plus = num * 2500;
			sum += plus;
			cout << plus << "원입니다. 맛있게 드세요.\n";
		}
		else
			cout << "없는 메뉴입니다. 다시 주문해주세요.\n";
	}

	cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~\n";

	return 0;
}
*/