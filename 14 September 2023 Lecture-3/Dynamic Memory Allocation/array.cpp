#include <iostream>
using namespace std;
class DMA
{
public:
    int *A;
    int size;
    void initialize(int s)
    {
        A = new int[s];
        size = s;
    }
    void fill()
    {
        for (int i = 0; i < size; i++)
        {
            A[i] = i + 5;
        }
    }
    void addElement(int e)
    {
        int *B;
        B = new int[size + 1];
        for (int i = 0; i < size; i++)
        {
            B[i]=A[i];
        }
    B[size]=e;
    size++;
    A=B;
    delete[] B;

    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<A[i]<<"\t";
        }
    }
};
int main(){
    DMA t;
    t.initialize(5);
    t.fill();
    t.addElement(6);
    t.print();
}