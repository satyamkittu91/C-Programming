#include <iostream>
#include <string>
using namespace std;

class Teacher{
    private:
        double salary;

    public:

        //non - parameterized constructor
        Teacher(){
           dept = "Computer Science";
        }

        //parameterized constructor
        Teacher(string name, string dept, string subject, double salary){
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        }
    
        string name;
        string dept;
        string subject;

        // copy constructor
        Teacher(Teacher &orgObj) { // pass by reference
            this->name = orgObj.name;
            this->dept = orgObj.dept;
            this->subject = orgObj.subject;
            this->salary = orgObj.salary;
        }

        // Destructor
        ~Teacher() {
            // Destructor logic if needed
            cout << "Destructor called for " << name << endl;
        }

        void changeDept(string newDept){
            dept = newDept;
        }

        void setSalary(double newSalary){
            salary = newSalary;
        }

        double getSalary() const {
            return salary;
        }

        void getInfo() const {
            cout << "Name: " << name << ", Department: " << dept << ", Subject: " << subject << ", Salary: $" << salary << endl;
        }
};

int main(){
    Teacher teacher1;
    teacher1.name = "John Doe";
    teacher1.dept = "Mathematics";
    teacher1.subject = "Calculus";
    teacher1.setSalary(50000);

    teacher1.getInfo();
    Teacher teacher2(teacher1); //custom Copy constructor
    teacher2.getInfo();

    // Changing the department
    teacher1.changeDept("Physics");
    cout << "Updated Department: " << teacher1.dept << endl;
    cout << "Salary: $" << teacher1.getSalary() << endl;

    return 0;
}