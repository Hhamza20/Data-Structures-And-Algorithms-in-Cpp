#include <iostream>
using namespace std;
int minArr(int arr[])
{
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int arr[10]={10,20,40,50,66,1,5,777,8,10};
    cout<<"Minimum Value is: "<<minArr(arr);
}