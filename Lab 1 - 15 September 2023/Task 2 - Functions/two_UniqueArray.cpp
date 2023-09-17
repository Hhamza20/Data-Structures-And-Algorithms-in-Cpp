#include <iostream>
using namespace std;
bool uniqueArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"Is Array Unique? "<<uniqueArr(arr,5);
}