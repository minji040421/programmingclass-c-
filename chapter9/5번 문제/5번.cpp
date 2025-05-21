#include <iostream>
using namespace std;

class AbstractGate
{
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	virtual bool operation() = 0;
};

class ANDGate : public AbstractGate
{
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	bool operation()
	{
		if (x && y)
			return true;
		else
			return false;
	}
};

class ORGate : public AbstractGate
{
protected:
	bool x, y;
public:
	void set(bool a, bool b) { this->x = a; this->y = b; }
	bool operation()
	{
		if (x || y)
			return true;
		else
			return false;
	}
};

class XORGate : public AbstractGate
{
protected:
	bool x, y;
public:
	void set(bool a, bool b) { this->x = a; this->y = b; }
	bool operation()
	{
		if (x && y)
			return false;
		else if (!x && !y)
			return false;
		else if (x || y)
			return true;
		else
			return false;
	}
};

int main()
{
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;

	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true, false);
	cout.setf(ios::boolalpha);
	cout << andGate.operation() << endl;
	cout << orGate.operation() << endl;
	cout << xorGate.operation() << endl;
}