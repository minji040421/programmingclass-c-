#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    
    cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
    while (true) {
        cout << ">> ";
        getline(cin, input); 

        if (input == "exit") {
            break; 
        }

        string reversed(input.rbegin(), input.rend()); 
        cout << reversed << endl; 
    }

    return 0;
}