#include <iostream>
using namespace std;
int *BubbleSort(int arr[], int size)
{
    int *sorted = new int[size];
    for (int i = 0; i < size; i++)
    {
        sorted[i] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (sorted[j] > sorted[j + 1])
            {
                int temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
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
    int *sortedArr = BubbleSort(unsortedArray, 10);
    cout << "Sorted Array is\t\t";
    for (int i = 0; i < 10; i++)
    {
        cout << sortedArr[i] << "\t";
    }
    return 0;
}
