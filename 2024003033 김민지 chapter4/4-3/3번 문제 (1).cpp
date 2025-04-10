#include <iostream>
#include <string> 
using namespace std;

int main() {
    string text; 
    int countAt = 0; 
    int index = 0; 

    
    cout << "문자열 입력>> ";
    getline(cin, text);

    // (1) at() 또는 []를 이용하여 'a'의 개수 세기
    for (int i = 0; i < text.length(); i++) {
        if (text.at(i) == 'a') { 
            countAt++;
        }
    }

    cout << "문자 a는 " << countAt <<"개 있습니다. " << endl;

    return 0;
}
