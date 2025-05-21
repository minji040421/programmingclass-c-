#include <iostream>  
using namespace std;
#include<string> 

//4번 문제
/*
class CoffeeMachine {
private:
	int coffee, water, sugar;
public:
	CoffeeMachine(int a, int b, int c) {
		coffee = a;
		water = b;
		sugar = c;
	}
	int drinkEspresso() {
		coffee = coffee - 1;
		water = water - 1;
		return coffee, water;
	}
	void show() {
		cout << "커피 머신 상태, " << "커피 : " << coffee << "\t"<<"물 : " << water << "\t"<<"설탕 : " << sugar << endl;
	}
	int drinkAmericano() {
		coffee = coffee - 1;
		water = water - 2;
		return coffee, water;
	}
	int drinkSugarCoffee() {
		coffee = coffee - 1;
		water = water - 2;
		sugar = sugar - 1;
		return coffee, water, sugar;
	}
	int fill() {
		coffee = 10;
		water = 10;
		sugar = 10;
		return coffee, water, sugar;
	}
};
int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();

	return 0;
}
*/