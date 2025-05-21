#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle
{
	int radius;
	string name;
public:
	NamedCircle(int a, string b)
	{
		this->radius = a;
		this->name = b;
	}
	void show()
	{
		cout << " �������� " << radius << "�� " << name;
	}
};

int main()
{
	NamedCircle waffle(3, "waffle");
	waffle.show();
}