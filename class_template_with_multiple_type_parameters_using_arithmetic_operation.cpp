#include <iostream>
using namespace std;

template <class T1, class T2>
class Calculator
{
    T1 a;
    T2 b;

public:
    Calculator(T1 x, T2 y)
    {
        a = x;
        b = y;
    }

    void calculate()
    {
        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;
        cout << "Division = " << a / b << endl;
    }
};

int main()
{
    Calculator<int, float> obj(10, 2.5);

    obj.calculate();

    return 0;
}
