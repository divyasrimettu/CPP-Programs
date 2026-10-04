#include <iostream>
using namespace std;
class Grandparent
{
protected:
    int a;

public:
    Grandparent(int x)
    {
        a = x;
    }
};
class Parent : public Grandparent
{
protected:
    int b;

public:
    Parent(int x, int y) : Grandparent(x)
    {
        b = y;
    }
};
class Child : public Parent
{
private:
    int c;

public:
    Child(int x, int y, int z) : Parent(x, y)
    {
        c = z;
    }

    void display()
    {
        cout << "Grandparent value: " << a << endl;
        cout << "Parent value: " << b << endl;
        cout << "Child value: " << c << endl;
    }
};

int main()
{
    Child obj(10, 20, 30);

    obj.display();

    return 0;
}

