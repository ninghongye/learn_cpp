#include <iostream>
using namespace std;

void duplicate(int &a, int &b)
{
    a *= 2;
    b *= 2;
}

long factorial(long a)
{
    if (a > 1)
        return (a * factorial(a - 1));
    else
        return 1;
}

int main()
{
    int a = 2, b = 4;

    duplicate(a, b);
    cout << "a = " << a << "\tb = " << b << endl;

    cout << factorial(4) << endl;

    return 0;
}
