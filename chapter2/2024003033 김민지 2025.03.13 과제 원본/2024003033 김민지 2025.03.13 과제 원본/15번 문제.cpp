#include <iostream>
using namespace std;
#include <cstring>
#include <string>
#include<cstdlib>

//15번 문제

int main() {
	char text[100];
	char num1[50], num2[50], p;
	int i, j, result, n1, n2, len;
	while (true) {
		cout << "?  ";
		cin.getline(text, 100);
		len=strlen(text);
		i = 0;
		j = 0;
		while (i < len && text[i] != ' ') {
			num1[j++] = text[i++];
		}
		num1[j] = '\0';

		while (i < len && text[i] == ' ') {
			i++;
		}
		if (i < len) {
			p = text[i++];
		}
		else {
			cout << "잘못된 입력입니다. 다시 입력하세요.\n";
			continue;
		}
		while (i < len && text[i] == ' ') {
			i++;
		}
		j = 0;
		while (i < len && text[i] != ' ') {
			num2[j++] = text[i++];
		}
		num2[j] = '\0';

		n1 = atoi(num1);
		n2 = atoi(num2);

		if (p == '+') {
			result = n1 + n2;
		}
		else if (p == '-') {
			result = n1 - n2;
		}
		else if (p == '*') {
			result = n1 * n2;
		}
		else if (p == '/') {
			result = n1 / n2;
		}
		else if (p == '%') {
			result = n1 % n2;
		}
		else {
			cout << "잘못된 연산입니다. 다시 하세요.";
		}
		cout << n1 << " " << p << " " << n2 << " = " << result<<"\n";
	}
	return 0;
}
