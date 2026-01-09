#include <iostream>
#include <string>
using namespace std;
// Base Class: Person
class Person {
// TO-DO: Implement the Person Class here
    public:
        string name;
        int age;
        Person(string n, int a) : name(n), age(a) {}
        virtual void displayInfo() const {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};
// Derived Class: Student
class Student : public Person {
// TO-DO: Implement the Student Class here
    public:
        int studentID;
        Student(string n, int a, int id) : studentID(id), Person(n, a) {}
        void displayInfo() const override {
            Person::displayInfo();
            cout << "Student ID: " << studentID << endl;
        }
};
// main()
int main() {
 Person p1("Bob", 18);
 p1.displayInfo();
 cout << endl;
 Student s1("Alice", 20, 12345);
 s1.displayInfo();
 cout << endl;
 Person* p = &s1;
 p->displayInfo();
 return 0;
}