#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "hello";

    // Range-based for loop
    for (char c : str)
    {
        cout << "[" << c << "]";
    }
    cout << endl;

    int a[] = {5, 4, 3, 2};
    for (auto c : a)
    {
        cout << "[" << c << "]";
    }
    cout << endl;

    return 0;
}
