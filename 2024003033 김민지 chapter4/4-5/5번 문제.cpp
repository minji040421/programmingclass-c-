#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    srand((unsigned)time(0)); 
    int n = rand();
    string input;

    cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)\n";
    while (true) {
        cout << ">> ";
        getline(cin, input); 

        if (input == "exit") {
            break; 
        }

        if (!input.empty()) {
            int index = n % input.length(); 
            char randomChar = 'a' + n % 26; 
            input[index] = randomChar; 
        }

        cout << input << endl; 
    }

    return 0;
}
