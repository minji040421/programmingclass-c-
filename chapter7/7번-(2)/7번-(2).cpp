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

	friend Matrix operator >> (Matrix q, int w[]);
	friend Matrix& operator << (Matrix& e, int r[]);

	void show()
	{
		cout << "Matrix = {" << a << ' ' << b << ' ' << c << ' ' << d << "} \n";
	}
};

Matrix operator >> (Matrix q, int w[])
{
	int* p = w;
	p[0] = q.a;
	p[1] = q.b;
	p[2] = q.c;
	p[3] = q.d;
	return *p;
}

Matrix& operator << (Matrix& e, int r[])
{
	e.a = r[0];
	e.b = r[1];
	e.c = r[2];
	e.d = r[3];
	return e;
}

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