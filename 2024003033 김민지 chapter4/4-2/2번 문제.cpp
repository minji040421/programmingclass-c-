#include <iostream>
using namespace std;

int main() {
    int* numbers = new int[5];
    int sum = 0; 
    double average; 

    cout << "���� 5�� �Է�>> ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i]; 
        sum += numbers[i]; 
    }

    average = static_cast<double>(sum) / 5; 

    cout << "��� " << average << endl;

    delete[] numbers;

    return 0;
}
