#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int j = 90;
    int *const p = &i; // Initialization Necessary
    i = i + 1;
    cout << *p;
    // p=&j;     Address can't be changed but value can be changed. It is called constant pointer. //This Statement Will Give Error

    return 0;
}