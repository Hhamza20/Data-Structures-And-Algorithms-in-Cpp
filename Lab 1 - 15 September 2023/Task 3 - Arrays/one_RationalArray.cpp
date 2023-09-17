#include <iostream>
using namespace std;
int main()
{
    const int arraySize = 10;
    double rationals[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        rationals[i] = 0;
    }
    rationals[3] = 2.84;
    rationals[8] = 1.667;
    cout << rationals[5] << "\t\t" << rationals[8]<<endl;

    for (int x = 0; x < arraySize; x++)
    {
       cout<<rationals[x]<<"\t";
    }
}