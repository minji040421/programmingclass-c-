#include <iostream>
using namespace std;

class BaseArray
{
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100)
	{
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[]mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : protected BaseArray
{
	int z, ind = 0, p = 0;
public:
	MyQueue(int z) : BaseArray(z)
	{
		this->z = z;
		for (int i = 0; i < z; i++)
			put(i, 0);
	}
	void enqueue(int a)
	{
		put(ind, a);
		ind++;
	}
	int capacity()
	{
		return getCapacity();
	}
	int length()
	{
		return ind;
	}
	int dequeue()
	{
		int I = get(p);
		put(p, 0);
		p++;
		ind--;
		return I;
	}
};

int main()
{
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶� >> ";
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮 : " << mQ.capacity() << ", ť�� ũ�� : " << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�. >> ";
	while (mQ.length() != 0)
	{
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}
