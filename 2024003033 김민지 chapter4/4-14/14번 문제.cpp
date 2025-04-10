#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class Player {
    string name;

public:
    Player(string name) : name(name) {}
    string getName() { return name; }

    bool play() {
        int nums[3];
        cout << name << " : <Enter>";
        cin.get();  

        for (int i = 0; i < 3; i++) {
            nums[i] = rand() % 3; 
            cout << nums[i] << " ";
        }

        cout << endl;

        return (nums[0] == nums[1] && nums[1] == nums[2]);
    }
};

class GamblingGame {
    Player* players[2];

public:
    GamblingGame() {
        string name1, name2;
        cout << "***** ���� ������ �����մϴ�. *****" << endl;
        cout << "ù ��° ���� �̸� >> ";
        cin >> name1;
        cout << "�� ��° ���� �̸� >> ";
        cin >> name2;
        cin.ignore(); 

        players[0] = new Player(name1);
        players[1] = new Player(name2);
    }

    void run() {
        int turn = 0;

        while (true) {
            if (players[turn]->play()) {
                cout << players[turn]->getName() << "�� �¸�!!" << endl;
                break;
            }
            else {
                cout << "�ƽ�����!" << endl;
                turn = (turn + 1) % 2;
            }
        }
    }

    ~GamblingGame() {
        delete players[0];
        delete players[1];
    }
};

int main() {
    srand((unsigned int)time(0)); 
    GamblingGame game;
    game.run();
    return 0;
}