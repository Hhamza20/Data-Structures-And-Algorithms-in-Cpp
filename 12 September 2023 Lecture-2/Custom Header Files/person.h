// #include<iostream>
#include <string>
using namespace std;
class person{
    private:
        string name;
        int age;
    public:
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        void setName(string name){
            this->name=name;
        }
        void setAge(int age){
            this->age=age;
        }
};
