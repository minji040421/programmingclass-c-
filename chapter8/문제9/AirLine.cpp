#include<iostream>
#include "AirLine.h"
using namespace std;

int Console::select_menu() {
    cout << "����:1, ���:2, ����:3, ������:4>> ";
    int menu;
    cin >> menu;
    return menu;
}

int Console::select_time() {
    cout << "07��:1, 12��:2, 17��:3>> ";
    int time;
    cin >> time;
    return time;
}

int Console::seat_num() {
    cout << "�¼� ��ȣ>> ";
    int seat_num;
    cin >> seat_num;
    if (seat_num < 1 || 8 < seat_num) {
        cout << "���� �¼� ��ȣ �Դϴ�. ó�� �޴��� ���ư��ϴ�.\n";
        return 0;
    }
    return seat_num;
}

string Console::inname() {
    cout << "�̸� �Է�>> ";
    string name;
    cin >> name;
    return name;
}

void AirlineBook::start() {
    while (true) {
        menu = Console::select_menu();
        if (menu == 1 || menu == 2) {
            time = Console::select_time();
            if (menu == 1) {
                switch (time) {
                case 1: {
                    schedule[0].show_schedule();
                    int seat_num = Console::seat_num();
                    if (seat_num == 0)
                        break;
                    string person_name = Console::inname();
                    schedule[0].set_res(seat_num, person_name);
                    break;
                }
                case 2: {
                    schedule[1].show_schedule();
                    int seat_num = Console::seat_num();
                    if (seat_num == 0)
                        break;
                    string person_name = Console::inname();
                    schedule[1].set_res(seat_num, person_name);
                    break;
                }
                case 3: {
                    schedule[2].show_schedule();
                    int seat_num = Console::seat_num();
                    if (seat_num == 0)
                        break;
                    string person_name = Console::inname();
                    schedule[2].set_res(seat_num, person_name);
                    break;
                }
                case 4:
                    cout << "�߸� �����ϼ̽��ϴ�. ó�� �޴��� ���ư��ϴ�.\n";
                }
            }
            else {
                switch (time) {
                case 1: {
                    schedule[0].show_schedule();
                    int seat_num = Console::seat_num();
                    if (seat_num == 0)
                        break;
                    string person_name = Console::inname();
                    schedule[0].cancel_res(seat_num, person_name);
                    break;
                }
                case 2: {
                    schedule[1].show_schedule();
                    int seat_num = Console::seat_num();
                    if (seat_num == 0)
                        break;
                    string person_name = Console::inname();
                    schedule[1].cancel_res(seat_num, person_name);
                    break;
                }
                case 3: {
                    schedule[2].show_schedule();
                    int seat_num = Console::seat_num();
                    if (seat_num == 0)
                        break;
                    string person_name = Console::inname();
                    schedule[2].cancel_res(seat_num, person_name);
                    break;
                }
                case 4:
                    cout << "�߸� �����ϼ̽��ϴ�. ó�� �޴��� ���ư��ϴ�.\n";
                }
            }
        }
        else if (menu == 3) {
            for (int i = 0; i < 3; i++) {
                schedule[i].show_schedule();
            }
        }
        else if (menu == 4) {
            cout << "���� �ý����� �����մϴ�.";
            exit(0);
        }
        else {
            cout << "�߸� �Է��ϼ̽��ϴ�. �޴��� �ٽ� ������ �ּ���.\n";
        }
        cout << endl;
    }
}

void Schedule::show_schedule() {
    cout << this->scname << "��:";
    for (int i = 0; i < 8; i++)
        cout << "\t" << seat[i].show_name();
    cout << endl;
}

void Schedule::set_res(int seat_num, string person) {
    if (seat[seat_num - 1].show_name() != "---")
        cout << "�̹� ����� �ڸ��Դϴ�. ó�� �޴��� ���ư��ϴ�.\n";
    else seat[seat_num - 1].set_name(person);
}

void Schedule::cancel_res(int seat_num, string person) {
    if (seat[seat_num - 1].show_name() == "---") {
        cout << "�̹� ����ִ� �ڸ��Դϴ�. ó�� �޴��� ���ư��ϴ�.\n";
        return;
    }
    if (seat[seat_num - 1].show_name() != person) {
        cout << "����� �̸��� ��ġ���� �ʽ��ϴ�. ó�� �޴��� ���ư��ϴ�.\n";
        return;
    }
    seat[seat_num - 1].reset_name();
}

