#ifndef AIRLINE_H
#define AIRLINE_H
#include <iostream>
using namespace std;

class Console {
public:
    static int select_menu();
    static int select_time();
    static int seat_num();
    static string inname();
};

class Seat {
    string name;
public:
    Seat() { name = { "---" }; }
    void set_name(string name) { this->name = name; }
    void reset_name() { name = { "---" }; }
    string show_name() { return name; }

};

class Schedule {
    Seat* seat;
    string scname;
    int seat_num;
    string person;
public:
    Schedule() { seat = new Seat[8]; }
    ~Schedule() { delete[] seat; }
    void set_tname(string scname) { this->scname = scname; }
    void show_schedule();
    void set_res(int seat_num, string person);
    void cancel_res(int seat_num, string person);
};


class AirlineBook {
    Schedule* schedule;
    int menu;
    int time;
public:
    AirlineBook() {
        schedule = new Schedule[3];
        schedule[0].set_tname("07");
        schedule[1].set_tname("12");
        schedule[2].set_tname("17");
    }
    ~AirlineBook() { delete[] schedule; }
    void start();
};
#endif
