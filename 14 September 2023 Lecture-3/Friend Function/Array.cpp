#include <iostream>
using namespace std;
class Arr
{
private:
    int arr_size;
    int *arr;

public:
    Arr(int size)
    {
        arr_size = size;
        arr = new int[arr_size];
    }
    void setArray()
    {
        int j;
        for (int i = 0; i < arr_size; i++)
        {
            cout << "Enter Array element at index " << i << "\n";
            cin >> j;
            arr[i]=j;
        }
    }
    ~Arr(){
        delete arr;
    }
    friend ostream& operator<<(ostream& output, const Arr& array) {
        for (int i = 0; i < array.arr_size; i++) {
            output << array.arr[i] << " ";
        }
        return output;
    }
};

int main(){
    Arr arr(5);
    arr.setArray();
    cout<<arr;

}