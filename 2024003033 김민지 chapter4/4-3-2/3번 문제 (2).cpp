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

    // (2) find()를 이용하여 'a'의 개수 세기
    int countFind = 0;
    while ((index = text.find('a', index)) != string::npos) {
        countFind++;
        index++;
    }

    cout << "문자 a는 " << countFind <<"개 있습니다." << endl;

    return 0;
}