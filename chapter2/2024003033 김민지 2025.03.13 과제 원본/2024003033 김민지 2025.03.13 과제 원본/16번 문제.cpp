#include <iostream>
using namespace std;
#include <cstring>
#include <string>
#include<cstdlib>

//16�� ����
/*
int main() {
	char buf[10000];
	int alpa[26] = { 0 };

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���.������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
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
	cout << "�� ���ĺ� �� " << total << "\n";
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