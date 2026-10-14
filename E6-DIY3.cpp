
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
        cout << "Person constructor called" << endl;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;

public:
    Student(string n, int r) : Person(n) {
        rollNo = r;
        cout << "Student constructor called" << endl;
    }
};

class Employee : virtual public Person {
protected:
    int employeeId;

public:
    Employee(string n, int e) : Person(n) {
        employeeId = e;
        cout << "Employee constructor called" << endl;
    }
};

class TA : public Student, public Employee {
public:
    TA(string n, int r, int e)
        : Person(n), Student(n, r), Employee(n, e) {
        cout << "TA constructor called" << endl;
    }

    void display() {
        showPerson();
        cout << "Roll Number: " << rollNo << endl;
        cout << "Employee ID: " << employeeId << endl;
    }
};

int main() {
    TA ta("Ria", 25, 501);

    cout << "\nTeaching Assistant Details:" << endl;
    ta.display();

    return 0;
}
