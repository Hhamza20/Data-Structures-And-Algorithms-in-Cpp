#include<iostream>
using namespace std;
template <class t>
class Test{
    public:
    t add(t a, t b){
        return a+b;
    }

};
int main() {
Test<int> *t1=new Test<int>();
cout<<"Integers: "<<t1->add(5,6)<<endl;
Test<float> *t2=new Test<float>();
cout<<"Floating Point: "<<t2->add(5.5,6.1);

    return 0;
}