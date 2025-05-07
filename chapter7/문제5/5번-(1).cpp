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

	Color operator + (Color a)
	{
		Color tmp;
		tmp.red = this->red + a.red;
		tmp.green = this->green + a.green;
		tmp.blue = this->blue + a.blue;
		return tmp;
	}
	bool operator == (Color b)
	{
		if (red == b.red && green == b.green && blue == b.blue)
			return true;
		else
			return false;
	}

	void show();
};

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