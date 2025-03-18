#include <iostream>
using namespace std;
#include <cstring>
#include <string>
#include<cstdlib>

//16번 문제
/*
int main() {
	char buf[10000];
	int alpa[26] = { 0 };

	cout << "영문 텍스트를 입력하세요.히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	cin.getline(buf, 10000, ';');
	int total = 0;
	int len = strlen(buf);

	for (int i = 0; i < len; i++) {
		if (isalpha(buf[i])) {
			char lowerbuf = tolower(buf[i]);
			alpa[lowerbuf - 'a']++;
			total++;
		}
	}
	cout << "총 알파벳 수 " << total << "\n";
	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 'a') << " (" << alpa[i] << ") : ";
		for (int j = 0; j < alpa[i]; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
*/