#include <iostream>
using namespace std;

class Book
{
	string title;
	int price, pages;
public:
	Book(string title = " ", int price = 0, int pages = 0)
	{
		this->title = title;
		this->price = price;
		this->pages = pages;
	}

	friend Book& operator += (Book& op, int x);
	friend Book& operator -= (Book& op, int x);

	void show()
	{
		cout << title << ' ' << price << "�� " << pages << "������" << endl;
	}
	string getTitle()
	{
		return title;
	}
};

Book& operator += (Book& op, int a)
{
	op.price = op.price + a;
	return op;
}

Book& operator -= (Book& op, int b)
{
	op.price = op.price - b;
	return op;
}

int main()
{
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}