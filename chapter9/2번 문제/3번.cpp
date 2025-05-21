#include <iostream>
using namespace std;

class LoopAdder
{
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "") { this->name = name; }
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};

void LoopAdder::read()
{
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ���. >> ";
	cin >> x >> y;
}

void LoopAdder::write()
{
	cout << x << "���� " << y << "������ �� = " << sum << "�Դϴ�. " << endl;
}

void LoopAdder::run()
{
	read();
	sum = calculate();
	write();
}

class ForLoopAdder : public LoopAdder
{
protected:
	string a;
public:
	ForLoopAdder(string a) : LoopAdder(a) { this->a = a; }
	int calculate();
};

int ForLoopAdder::calculate()
{
	int x = getX();
	int y = getY();
	int sum{};

	for (int i = x; i < y + 1; i++) {
		sum += i;
	}

	return sum;
}

int main()
{
	ForLoopAdder forLoop("For Loop");
	forLoop.run();
}