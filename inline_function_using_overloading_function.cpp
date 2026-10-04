#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return a + b;
}

inline int add(int a, int b, int c)
{
    return a + b + c;
}

inline float add(float a, float b)
{
    return a + b;
}

int main()
{
    cout << "Sum of 10 and 20 = " << add(10, 20) << endl;
    cout << "Sum of 10, 20 and 30 = " << add(10, 20, 30) << endl;
    cout << "Sum of 10.5 and 20.5 = " << add(10.5f, 20.5f) << endl;

    return 0;
}


