#include <iostream>
#include <string>
using namespace std;

class Matrix
{
	int a, b, c, d;
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}

	Matrix operator >> (int a[])
	{
		int* p = a;
		p[0] = this->a;
		p[1] = this->b;
		p[2] = this->c;
		p[3] = this->d;
		return *p;
	}

	Matrix& operator << (int b[])
	{
		this->a = b[0];
		this->b = b[1];
		this->c = b[2];
		this->d = b[3];
		return *this;
	}

	void show()
	{
		cout << "Matrix = {" << a << ' ' << b << ' ' << c << ' ' << d << "} \n";
	}
};

int main()
{
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++)
		cout << x[i] << ' ';
	cout << endl;
	b.show();
}