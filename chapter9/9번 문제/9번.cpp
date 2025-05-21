#include <iostream>
using namespace std;

class Printer
{
protected:
	string model;
	string manu;
	int priCount;
	int able;
public:
	virtual void print(int pages) = 0;
	virtual void show() = 0;
};

class InkjetPrinter : public Printer
{
protected:
	int ink{ 10 };
public:
	InkjetPrinter() {
		model = "Officejet V40";
		manu = "HP";
		able = 5;
		show();
	}
	int avaliableInk()
	{
		return ink;
	}
	void print(int p)
	{
		if (able < p || ink < p)
		{
			cout << "용지가 부족하여 출력할 수 없습니다." << endl;
		}
		else
		{
			able -= p;
			ink -= p;
			cout << "프린트하였습니다." << endl;
		}
	}
	void show()
	{
		cout << "잉크젯 : " << model << ", " << manu << ", 남은 종이 " << able << "장 , 남은 잉크 " << avaliableInk() << endl;
	}
};

class LaserPrinter : public Printer
{
protected:
	int toner{ 20 };
public:
	LaserPrinter() {
		model = "SCX-6x45";
		manu = "삼성전자";
		able = 3;
		show();
	}
	int avaliableToner()
	{
		return toner;
	}
	void print(int p)
	{
		if (able < p || toner < p)
		{
			cout << "용지가 부족하여 출력할 수 없습니다." << endl;
		}
		else
		{
			able -= p;
			toner -= 0.5*p;
			cout << "프린트하였습니다." << endl;
		}
	}
	void show()
	{
		cout << "레이저 : " << model << ", " << manu << ", 남은 종이 " << able << "장 , 남은 토너 " << avaliableToner() << endl;
	}
};

int main()
{
	cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
	InkjetPrinter inkjet;
	LaserPrinter laser;
	int ch, cnt;
	char yORn;
	while (true)
	{
	reInput:
		cout << endl<<"프린터 (1: 잉크젯, 2: 레이저)와 매수 입력 >> ";
		cin >> ch >> cnt;
		if (ch == 1)
		{
			inkjet.print(cnt);
		}
		else if (ch == 2)
		{
			laser.print(cnt);
		}
		else
		{
			cout << "입력이 잘못되었습니다. 다시 입력해주세요. " << endl;
			goto reInput;
		}
		inkjet.show();
		laser.show();
	reyORn:
		cout << "계속 프린트 하시겠습니까? ( y / n ) >> ";
		cin >> yORn;
		if (yORn == 'y')
			continue;
		else if (yORn == 'n')
		{
			break;
		}
		else
		{
			cout << "입력이 잘못되었습니다. 다시 입력해주세요. " << endl;
			goto reyORn;
		}

	}
	return 0;
}