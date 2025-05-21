#include<iostream>
using namespace std;

//3-1
/*
class Circle {
public:
	int radius;
	double getArea();
	int innerRadius;
	int outerRadius;
	double innergetArea();
	double outergetArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}
double Circle::innergetArea() {
	return 3.14 * innerRadius * innerRadius;
}
double Circle::outergetArea() {
	return 3.14 * outerRadius * outerRadius;
}
int main() {
	Circle donut;
	donut.radius=1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

	Circle donut_two;
	donut_two.innerRadius = 1;
	donut_two.outerRadius = 2;
	area = donut_two.innergetArea();
	cout << "donut_two 면적은 " << area << endl;

	return 0;
}
*/