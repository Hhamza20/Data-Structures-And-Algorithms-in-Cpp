#include<iostream>
using namespace std;
class Test{
    private:
        int *p;
    public:
        Test(){
            p=new int[10];
            cout<<"Constructor called\n";
        }
        ~Test(){
            delete p;
            cout<<"Destructor called";
        }
};
int main(){
    Test t
    ;
    return 0;
}