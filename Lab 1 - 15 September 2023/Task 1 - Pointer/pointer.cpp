#include <iostream>
using namespace std;
int main()
{
    // Points Noted during lecture:

    // Pointer store address of any variable
    // Pointer by default has null
    // int *ptr; is called pointer to integer
    // char *x; is pointer to character;
    //  pointer dont have any datatype
    // Can also write void *p; ie. any type variable address can be stored. I creates problems in defrencing
    // cout<*p; is defrencing the pointer. to defrefrence any pointer, use * with it
    // Initialization of const is necessary otherwise garbage get stored in it

    // int x = 9;
    // const int *ptr;            // Pointer to constant integer ie address can be changed but value can't
    // int const *ptr;            // Same as above
    // int *const ptr = &x;       // Constant pointer to integer. Value can be changed but address can't be changed ie pointer is constant. Initialization is necessary here
    // const int *const ptr = &x; // Constant pointer to constant integer. Value and address can't be changed

    float number1 = 7.3;
    float number2;
    float *fPtr;
    fPtr = &number1;
    cout << *fPtr << endl;
    cout << number2 << endl;
    cout << number1 << endl;
    cout << fPtr << "\t\t" << &number1;
}