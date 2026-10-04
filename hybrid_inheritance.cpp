#include <iostream>
using namespace std;
class Person
{
protected:
    int age;

public:
    Person(int a)
    {
        age = a;
    }
};
class Student : virtual public Person
{
protected:
    int marks;

public:
    Student(int a, int m) : Person(a)
    {
        marks = m;
    }
};
class Employee : virtual public Person
{
protected:
    int salary;

public:
    Employee(int a, int s) : Person(a)
    {
        salary = s;
    }
};
class Result : public Student, public Employee
{
public:
    Result(int a, int m, int s)
        : Person(a), Student(a, m), Employee(a, s)
    {
    }

    void display()
    {
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Result r(20, 90, 30000);

    r.display();

    return 0;
}
