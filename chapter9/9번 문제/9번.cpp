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
			cout << "������ �����Ͽ� ����� �� �����ϴ�." << endl;
		}
		else
		{
			able -= p;
			ink -= p;
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
		}
	}
	void show()
	{
		cout << "��ũ�� : " << model << ", " << manu << ", ���� ���� " << able << "�� , ���� ��ũ " << avaliableInk() << endl;
	}
};

class LaserPrinter : public Printer
{
protected:
	int toner{ 20 };
public:
	LaserPrinter() {
		model = "SCX-6x45";
		manu = "�Ｚ����";
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
			cout << "������ �����Ͽ� ����� �� �����ϴ�." << endl;
		}
		else
		{
			able -= p;
			toner -= 0.5*p;
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
		}
	}
	void show()
	{
		cout << "������ : " << model << ", " << manu << ", ���� ���� " << able << "�� , ���� ��� " << avaliableToner() << endl;
	}
};

int main()
{
	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����." << endl;
	InkjetPrinter inkjet;
	LaserPrinter laser;
	int ch, cnt;
	char yORn;
	while (true)
	{
	reInput:
		cout << endl<<"������ (1: ��ũ��, 2: ������)�� �ż� �Է� >> ";
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
			cout << "�Է��� �߸��Ǿ����ϴ�. �ٽ� �Է����ּ���. " << endl;
			goto reInput;
		}
		inkjet.show();
		laser.show();
	reyORn:
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�? ( y / n ) >> ";
		cin >> yORn;
		if (yORn == 'y')
			continue;
		else if (yORn == 'n')
		{
			break;
		}
		else
		{
			cout << "�Է��� �߸��Ǿ����ϴ�. �ٽ� �Է����ּ���. " << endl;
			goto reyORn;
		}

	}
	return 0;
}