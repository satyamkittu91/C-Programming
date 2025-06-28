#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        string name;
        int age;

        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void displayInfo() const {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

class Student : public Person {
    public:
        double gpa;

        Student(string name, int age, double gpa) : Person(name, age) {
            this->gpa = gpa;
        }

        void displayInfo() const {
            Person::displayInfo();
            cout << "GPA: " << gpa << endl;
        }
};

int main() {
    Student student("Alice", 20, 3.8);
    student.displayInfo();

    return 0;
}