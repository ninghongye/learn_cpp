#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 3> my_array {10, 20, 30};

    for (int i = 0; i < my_array.size(); ++i)
        ++my_array[i];

    for (int elem : my_array)
        cout << elem << "\t";
    cout << endl;

    return 0;
}
