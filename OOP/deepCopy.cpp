#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa) {
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        Student(Student &obj) {
            this->name = obj.name;
            cgpaPtr = new double; // Allocate new memory for the CGPA
            *cgpaPtr = *(obj.cgpaPtr); // Deep copy the CGPA value
        }

        ~Student() {
            delete cgpaPtr; // Free the dynamically allocated memory
        }

        void display() const {
            cout << "Name: " << name << ", CGPA: " << *cgpaPtr << endl;
        }
};

int main() {
    Student student1("Alice", 3.8);
    student1.display();

    // Deep copy using copy constructor
    Student student2 = student1;
    student2.display();

    // Changing the CGPA of student2
    *student2.cgpaPtr = 3.9;
    cout << "After changing CGPA of student2:" << endl;
    
    student1.display(); // This will NOT reflect the change in student1
    student2.display();

    return 0;
}