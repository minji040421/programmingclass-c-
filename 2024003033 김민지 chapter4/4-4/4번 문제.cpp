#include <iostream>
using namespace std;

class Sample {
    int* p; 
    int size; 
public:
    Sample(int n) {             // 생성자
        size = n;
        p = new int[n];          // n개 정수 배열의 동적 생성
    }

    void read() {       // 동적 할당받은 정수 배열에 사용자로부터 정수를 입력받음
        cout << "정수 " << size << "개 입력>> ";
        for (int i = 0; i < size; i++) {
            cin >> p[i]; 
        }
    }

    void write() {      // 정수 배열을 화면에 출력
        for (int i = 0; i < size; i++) {
            cout << p[i] << " "; 
        }
        cout << endl;
    }

    int big() { // 배열에서 가장 큰 수 리턴
        int max = p[0]; 
        for (int i = 1; i < size; i++) {
            if (p[i] > max) {
                max = p[i]; 
            }
        }
        return max; 
    }

    ~Sample() { // 소멸자
        delete[] p; 
    }
};

int main() {
    Sample s(10); // 10개 정수를 가진 Sample 객체 생성
    s.read(); // 키보드에 정수 입력
    s.write(); // 정수 배열 출력
    cout << "가장 큰 수는 " << s.big() << endl; // 가장 큰 수 출력

    return 0;
}