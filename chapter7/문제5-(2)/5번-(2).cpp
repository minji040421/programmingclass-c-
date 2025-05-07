#include <iostream>
#include <string>
using namespace std;

class Color
{
	int red, green, blue;
public:
	Color(int red = 0, int green = 0, int blue = 0)
	{
		this->red = red;
		this->green = green;
		this->blue = blue;
	}

	friend Color operator + (Color a, Color b);
	friend bool operator == (Color c, Color d)
	{
		if (c.red == d.red && c.green == d.green && c.blue == d.blue)
			return true;
		else
			return false;
	}

	void show();
};

Color operator + (Color a, Color b)
{
	Color tmp;
	tmp.red = a.red + b.red;
	tmp.green = a.green + b.green;
	tmp.blue = a.blue + b.blue;
	return tmp;
}

void Color::show()
{
	cout << red << ' ' << green << ' ' << blue << endl;
}

int main()
{
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}