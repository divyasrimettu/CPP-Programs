#include <iostream>
using namespace std;

class Parent
{
protected:
    string property;

public:
    Parent(string p)
    {
        property = p;
    }
};
class Son : public Parent
{
public:
    Son(string p) : Parent(p)
    {
    }

    void display()
    {
        cout << "Son gets: " << property << endl;
    }
};
class Daughter : public Parent
{
public:
	Daughter(string p) : Parent(p)
	{
	}
	
	void display()
	{
		cout << "Daughter gets: " << property << endl;
	}
};

int main()
{
    Son s("House");
    Daughter d("Jewellery");

    s.display();
    d.display();

    return 0;
}

