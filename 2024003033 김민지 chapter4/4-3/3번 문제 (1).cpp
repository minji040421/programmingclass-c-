#include <iostream>
#include <string> 
using namespace std;

int main() {
    string text; 
    int countAt = 0; 
    int index = 0; 

    
    cout << "���ڿ� �Է�>> ";
    getline(cin, text);

    // (1) at() �Ǵ� []�� �̿��Ͽ� 'a'�� ���� ����
    for (int i = 0; i < text.length(); i++) {
        if (text.at(i) == 'a') { 
            countAt++;
        }
    }

    cout << "���� a�� " << countAt <<"�� �ֽ��ϴ�. " << endl;

    return 0;
}
