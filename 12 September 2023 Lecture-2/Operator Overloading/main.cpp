#include<iostream>
#include "C:\Users\DELL\OneDrive - Higher Education Commission\Desktop\Semester Three Material\DSA - Data Structures and Algorithms\Codes perfomed during lecture\12 September 2023 Lecture-2\Operator Overloading\Box.h"
using namespace std;
int main(){
    Box b1;
    Box b2;
    Box b3;
    b1.setHeight(10);
    b1.setLength(20);
    b1.setWidth(29);
    b2.setHeight(1);
    b2.setLength(12);
    b2.setWidth(122);
    b3=b1+b2;
    cout<<"Total Volume is: "<<b3.getVolume();
}