#include <iostream>

using namespace std;

union mytypes_t {
    char c;
    long i;
    float f;
} mytypes;

union mix_t {
  int l;
  struct {
    short hi;
    short lo;
    } s;
  char c[4];
} mix;

int main()
{
    cout << sizeof(mytypes) << endl;

    mix.l = 0x12345678;
    cout << hex << mix.l << endl;
    cout << hex << mix.s.hi << endl;
    
    return 0;
}
