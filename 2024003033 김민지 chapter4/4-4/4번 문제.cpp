#include <iostream>
using namespace std;

class Sample {
    int* p; 
    int size; 
public:
    Sample(int n) {             // ������
        size = n;
        p = new int[n];          // n�� ���� �迭�� ���� ����
    }

    void read() {       // ���� �Ҵ���� ���� �迭�� ����ڷκ��� ������ �Է¹���
        cout << "���� " << size << "�� �Է�>> ";
        for (int i = 0; i < size; i++) {
            cin >> p[i]; 
        }
    }

    void write() {      // ���� �迭�� ȭ�鿡 ���
        for (int i = 0; i < size; i++) {
            cout << p[i] << " "; 
        }
        cout << endl;
    }

    int big() { // �迭���� ���� ū �� ����
        int max = p[0]; 
        for (int i = 1; i < size; i++) {
            if (p[i] > max) {
                max = p[i]; 
            }
        }
        return max; 
    }

    ~Sample() { // �Ҹ���
        delete[] p; 
    }
};

int main() {
    Sample s(10); // 10�� ������ ���� Sample ��ü ����
    s.read(); // Ű���忡 ���� �Է�
    s.write(); // ���� �迭 ���
    cout << "���� ū ���� " << s.big() << endl; // ���� ū �� ���

    return 0;
}