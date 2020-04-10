#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int operation(int x, int y, int (*func)(int, int))
{
    int g;
    g = (*func)(x, y);
    return g;
}

int main()
{
    int (*minus)(int, int) = sub;

    cout << operation(7, 5, add) << endl;
    cout << operation(7, 5, minus) << endl;

    return 0;
}