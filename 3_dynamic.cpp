#include <iostream>

using namespace std;

int main()
{
    int i, n;
    int *p;

    cout << "How many member?";
    cin >> i;
    p = new(nothrow) int[i];
    if (p == nullptr)
        cout << "Error: memory failed.\n";
    else
    {
        for (n = 0; n < i; ++n)
        {
            cout << "Enter num:";
            cin >> p[n];
        }
        cout << "You've entered:";
        for (n = 0; n < i; ++n)
            cout << p[n] << "\t";
        cout << endl;
        delete[] p;
    }

    return 0;
}
