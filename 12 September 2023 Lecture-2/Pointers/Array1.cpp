#include <iostream>
using namespace std;
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p;
    p = a; // Name of array already have address of base location so no & sign
    for (int i = 0; i < 5; i++)
    {
        cout << *p << "\n";
        p = p + 1; // Pointer moving from its location here with increment of 4 bytes as int=4 bytes
    }

    return 0;
}