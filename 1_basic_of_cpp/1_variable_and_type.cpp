#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 5;
    int b(2);
    int c{3};

    cout << a + b + c << endl;

    string my_string = "This is a string";
    cout << my_string << endl;

    string name;
    cout << "input you name:";
    // cin >> name;
    getline(cin, name);
    cout << "Your name is " << name << endl;

    float price;
    cout << "Enter price:";
    cin >> price;
    cout << "The price is " << price << endl;

    return 0;
}
