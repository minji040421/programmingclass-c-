#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : protected Point
{
	int x, y;
	string color;
public:
	ColorPoint(int x, int y, string a) : Point(x, y)
	{
		this->x = x;
		this->y = y;
		this->color = a;
	}
	void setPoint(int a, int b)
	{
		this->x = a;
		this->y = b;
		move(this->x, this->y);
	}
	void setColor(string c)
	{
		this->color = c;
	}
	void show()
	{
		cout << color << "������ (" << getX() << ", " << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
	}
};

int main()
{
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}