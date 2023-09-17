#include <iostream>
using namespace std;
int GCD(int a, int b){
    while (b!=0)
    {
       int temp=b;
       b=a%b;
       a=temp;
    }
    return a;
}
int main(){
    cout<<"GCD of 2 & 6 is:\t"<<GCD(2,6);
    
}