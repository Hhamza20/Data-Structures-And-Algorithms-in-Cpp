#include <iostream>
using namespace std;
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *const p = a; // Name of array already have address of base location so no & sign but as constant pointer so initialization is necessary

    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << "\n"; // Pointer not moving from its location. Pointer has more precedence. first address is incremented then value is printed
    }

    return 0;
}