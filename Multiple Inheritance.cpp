#include <iostream>
using namespace std;

class Father
{
    public:
    void fatherMethod()
    {
        cout << "This is Father class." << endl;
    }
};

class Mother
{
    public:
    void motherMethod()
    {
        cout << "This is Mother class." << endl;
    }
};

class Child : public Father, public Mother
{
    public:
    void childMethod()
    {
        cout << "This is Child class." << endl;
    }
};

int main()
{
    Child c;

    c.fatherMethod();
    c.motherMethod();
    c.childMethod();

    return 0;
}
