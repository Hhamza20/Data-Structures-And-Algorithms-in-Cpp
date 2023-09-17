#include <iostream>
using namespace std;
int main()
{
    const int *p;   //It is called constant to pointer.
    int i = 5;
    int j = 90;
    p = &i;
    i = i + 1;
    p = &j; // Address can be changed but value can't of pointer directly
    //*p=*p+1;    Value of Pointer can't be directly changed but the variable which pointer is pointing to, it's value can be changed.
    cout << *p;

    return 0;
}