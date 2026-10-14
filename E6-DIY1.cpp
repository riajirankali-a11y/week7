
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

class Manager : public Employee {
    int teamSize;

public:
    Manager(string n, int i, int t) : Employee(n, i) {
        teamSize = t;
    }

    void show() {
        display();
        cout << "Team Size: " << teamSize << endl;
    }
};

class Engineer : public Employee {
    string skill;

public:
    Engineer(string n, int i, string s) : Employee(n, i) {
        skill = s;
    }

    void show() {
        display();
        cout << "Skill: " << skill << endl;
    }
};

int main() {
    Manager m("Ravi", 101, 10);
    Engineer e("Priya", 102, "C++");

    cout << "Manager Details:" << endl;
    m.show();

    cout << "\nEngineer Details:" << endl;
    e.show();

    return 0;
}
