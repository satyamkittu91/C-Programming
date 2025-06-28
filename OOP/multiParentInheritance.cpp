#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        double cgpa;

        Student(string name, double cgpa) {
            this->name = name;
            this->cgpa = cgpa;
        }

        void display() const {
            cout << "Name: " << name << ", CGPA: " << cgpa << endl;
        }
};

class Teacher {
    public:
        string name;
        double salary;

        Teacher(string name, double salary) {
            this->name = name;
            this->salary = salary;
        }

        void display() const {
            cout << "Name: " << name << ", Salary: " << salary << endl;
        }
};

class GradStudent : public Student, public Teacher {
    public:
        string thesisTopic;

        GradStudent(string studentName, double studentCgpa, string teacherName, double teacherSalary, string thesisTopic)
            : Student(studentName, studentCgpa), Teacher(teacherName, teacherSalary) {
            this->thesisTopic = thesisTopic;
        }

        void display() const {
            Student::display();
            Teacher::display();
            cout << "Thesis Topic: " << thesisTopic << endl;
        }
};