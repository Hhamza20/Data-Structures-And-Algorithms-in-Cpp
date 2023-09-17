#include<iostream>
using namespace std;
int main(){
   int i=5;
   int *p;
   p=&i;
   cout<<p<<"\n";  //Gives address of i variable
   cout<<*p<<"\n";  //Gives value of i variable ie. value of what pounter is pointing to


   i=i+1;
   *p=*p+1;
   cout<<i<<"\n";  // 7 printed
   cout<<*p<<"\n"; // 7 printed


   return 0;
}