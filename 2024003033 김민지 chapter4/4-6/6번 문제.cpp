#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    
    cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
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