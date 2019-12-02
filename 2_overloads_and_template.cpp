#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

template <class T>
T sum(T a, T b)
{
    return a + b;
}

int main()
{
    cout << add(5, 3) << endl;
    cout << add(5.5, 3.5) << endl;

    cout << sum<int>(8, 8) << endl;
    cout << sum<double>(8.5, 8.5) << endl;

    cout << sum(5.5, 5.5) << endl;

    return 0;
}
