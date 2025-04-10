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
        cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
        cout << "첫 번째 선수 이름 >> ";
        cin >> name1;
        cout << "두 번째 선수 이름 >> ";
        cin >> name2;
        cin.ignore(); 

        players[0] = new Player(name1);
        players[1] = new Player(name2);
    }

    void run() {
        int turn = 0;

        while (true) {
            if (players[turn]->play()) {
                cout << players[turn]->getName() << "님 승리!!" << endl;
                break;
            }
            else {
                cout << "아쉽군요!" << endl;
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