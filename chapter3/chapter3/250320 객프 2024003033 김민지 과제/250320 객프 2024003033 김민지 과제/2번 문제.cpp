#include <iostream> 
using namespace std;
#include<string>

//2번 문제
/*
class Date {
private:
	int year, month, day;
public:
	Date(int a, int b, int c) {
		year = a;
		month = b;
		day = c;
	}
	Date(string dateset) {
		int fs = dateset.find('/');
		int ss = dateset.find('/',fs+1);

		year = stoi(dateset.substr(0, fs));
		month = stoi(dateset.substr(fs+1, ss - fs - 1));
		day = stoi(dateset.substr(ss + 1));
	}
	void show() {
		cout << year << "년" << month << "월" << day << "일\n";
	}
	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
};
int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;

	return 0;
}
*/