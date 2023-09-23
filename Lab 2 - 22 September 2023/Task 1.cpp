#include<iostream>
using namespace std;

//Function Structure : Return_Type Function_Name (Parameters List){}
//Function provide reuseability
//Code is easy to read and understand
//Bigger problem is divided into sub-problems with every sub-problem having a specific problem
//Parameter passed to function inside main is called argument
//For pass by refrence function_name(* variable_name) & in main use function_name(&variable_name)

//friend functions: 
//private can only be accessed by friend function
//Write in orignal class: friend function_prototype();  it will allow this function in othe classes to access private data of class in which it is declared
//Similarly a class can be declared as an friend . it will aloow complete class to access private members of other class

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void cube(int *a){
	*a=*a * *a * *a;
}
	
void copy(int *x,int *y){
	*y=*x;
}

int main()
{
	cout<<"Swapping:\n";
	int a=10;
	int b=20;
	cout<<"Orignal Value\t";
	cout<<a<<"\t"<<b<<endl;
	swap(&a,&b);
	cout<<"After swapping\t";
	cout<<a<<"\t"<<b<<endl;
	
	cout<<endl<<endl<<"Cube:\n";
	int c=2;
	cout<<"Orignal number!\t"<<c<<endl;
	cube(&c);
	cout<<"Cube= "<<c;
	
	cout<<"\n\nCopy Function"<<endl;
	int x=5;
	int y=10;
	cout<<"Orignal Value"<<endl;
	cout<<x<<"\t"<<y;
	copy(&x,&y);
	cout<<"\nCopied Value"<<"\t"<<x<<"\t"<<y;
}
