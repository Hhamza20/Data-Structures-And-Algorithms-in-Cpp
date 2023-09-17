#include <iostream>
using namespace std;

int *SelectionSort(int arr[], int size)
{
    int *sorted = new int[size];
    for (int i = 0; i < size; i++)
    {
        sorted[i] = arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (sorted[j] < sorted[min])
            {
                min = j;
            }
        }
        int temp = sorted[i];
        sorted[i] = sorted[min];
        sorted[min] = temp;
    }
    return sorted;
}

int main()
{
    int unsortedArray[10] = {10, 22, 33, 111, 3, 39, 345, 4, 0, 9};
    cout << "Original Array was\t";
    for (int i = 0; i < 10; i++)
    {
        cout << unsortedArray[i] << "\t";
    }
    cout << endl;
    int *sortedArr = SelectionSort(unsortedArray, 10);
    cout << "Sorted Array is\t\t";
    for (int i = 0; i < 10; i++)
    {
        cout << sortedArr[i] << "\t";
    }
    return 0;
}
