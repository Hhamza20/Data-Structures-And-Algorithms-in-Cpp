#include <iostream>
using namespace std;
void copyArr(int arr1[], int size1, int arr2[], int size2)
{
    if (!(size1 == size2))
    {
        cout << "Array can't be copied as size not same! ";
    }
    else
    {
        for (int i = 0; i < size1; i++)
        {
            arr1[i]=arr2[i];
        }
        
    }
}
int main()
{
    // int unsortedArray[10] = {10, 22, 33, 111, 3, 39, 345, 4, 0, 9};
    int arr1[10] = {10, 22, 33, 111, 3, 39, 345, 4, 0, 9};
    int arr2[10]={1,2,3,4,5,6,7,8,9,10};
    copyArr(arr1,10,arr2,10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr1[i]<<"\t"<<arr2[i]<<endl;
    }
    
}