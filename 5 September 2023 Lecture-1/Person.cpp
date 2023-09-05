#include <iostream>
using namespace std;

//Creating a new class
class Person
{
private:
    int age;
    string name;

public:
    void setName(string name);
    void setAge(int age);
    int getAge();
    string getName();
    Person();
    Person(int age, string name);
};

//Defining Constructors,and all methods' body
Person::Person() {}
Person::Person(int age, string name)
{
    this->age = age;
    this->name = name;
}
void Person::setAge(int age)
{
    this->age = age;
}
void Person::setName(string name)
{
    this->name = name;
}
int Person::getAge()
{
    return age;
}
string Person::getName()
{
    return name;
}

//Main method
int main(int argc, char const *argv[])
{
    Person *p = new Person();
    p->setAge(19);
    p->setName("Hamza");
    cout << p->getName() << "  " << p->getAge();
    return 0;
}
