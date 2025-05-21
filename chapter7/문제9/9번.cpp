#include <iostream>
#include <string>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	friend Circle operator + (int a, Circle b);
	void show() { cout << "radius = " << radius << " ÀÎ ¿ø" << endl; }
};

Circle operator + (int a, Circle b)
{
	int y = a + b.radius;
	return y;
}

int main()
{
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}