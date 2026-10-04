#include <iostream>
using namespace std;

// Parent class
class Parent
{
public:
    void showParent()
    {
        cout << "This is Parent class." << endl;
    }
};

// Child class inherits Parent
class Child : public Parent
{
public:
    void showChild()
    {
        cout << "This is Child class." << endl;
    }
};

int main()
{
    Child c;

    c.showParent();  // Parent class function
    c.showChild();   // Child class function

    return 0;
}
