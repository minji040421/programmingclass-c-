#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    srand((unsigned)time(0)); 
    int n = rand();
    string input;

    cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)\n";
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
