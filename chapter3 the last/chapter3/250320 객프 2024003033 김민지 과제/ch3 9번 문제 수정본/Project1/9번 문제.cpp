#include <iostream>  
using namespace std;
#include<string> 
#include<cstdlib>
#include<ctime>

//9¹ø ¹®Á¦

class Oval {
private:
    int width, height;

public:
    Oval();                     
    Oval(int a, int b);         
    ~Oval();                    
    int getWidth();             
    int getHeight();            
    void set(int w, int h);     
    void show();                
};
Oval::Oval() {
    width = 1;
    height = 1;
}

Oval::Oval(int a, int b) {
    width = a;
    height = b;
}

Oval::~Oval() {
    cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << endl;
}

int Oval::getWidth() {
    return width;
}

int Oval::getHeight() {
    return height;
}

void Oval::set(int w, int h) {
    width = w;
    height = h;
}

void Oval::show() {
    cout << "width = " << width << ", height = " << height << endl;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;

	return 0;
}