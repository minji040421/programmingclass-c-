#include <iostream>
using namespace std;

class BaseMemory
{
	char* mem;
protected:
	BaseMemory(int size)
	{
		mem = new char[size];
	}
	void burnMemory(char a[], int b)
	{
		for (int i = 0; i < b; i++)
			mem[i] = a[i];
	}
	char getMemory(int i)
	{
		return mem[i];
	}
	void setMemory(int j, char c)
	{
		mem[j] = c;
	}
};

class ROM : protected BaseMemory
{
	int r, b;
	char d[];
public:
	ROM(int size, char d[], int burn) : BaseMemory(size)
	{
		this->r = size;
		this->b = burn;
		burnMemory(d, burn);
	}
	char read(int i)
	{
		return getMemory(i);
	}
};

class RAM : protected BaseMemory
{
	int s;
public:
	RAM(int size) : BaseMemory(size)
	{
		s = size;
	}
	void write(int q, char w)
	{
		setMemory(q, w);
	}
	char read(int a)
	{
		return getMemory(a);
	}
};

int main()
{
	char x[5] = { 'h' , 'e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++)
		mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++)
		cout << mainMemory.read(i);
}
