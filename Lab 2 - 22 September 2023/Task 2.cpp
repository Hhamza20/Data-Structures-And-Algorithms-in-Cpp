#include<iostream>
//#include<string>
using namespace std;
class Calculator{
	public:
			int ADD(int a,int b,int c,int d,int e){
			return a+b+c+d+e;
		}
		int ADD(int a,int b,int c,int d){
			return a+b+c+d;
		}
			int ADD(int a,int b,int c){
			return a+b+c;
		}
			int ADD(int a,int b){
			return a+b;
		}
		
};
class second{
	public:
		void data_type(int a){
			cout<<"Integer Passed"<<endl;
		}
		void data_type(char a){
			cout<<"Character Passed"<<endl;
		}
		void data_type(float a){
			cout<<"Float Passed"<<endl;
		}
		void data_type(string a){
			cout<<"String Passed";
		}
};
int main(){
	cout<<"Calculator class"<<endl;
	Calculator func;
	cout<<"5 Parameter\t"<<func.ADD(1,2,3,4,5)<<endl;
	cout<<"4 Parameter\t"<<func.ADD(1,2,3,4)<<endl;
	cout<<"3 Parameter\t"<<func.ADD(1,2,3)<<endl;
	cout<<"2 Parameter\t"<<func.ADD(1,2);
	
	cout<<endl<<endl;
	second data;
	data.data_type(5);
	data.data_type(float(5.3));
	data.data_type('c');
	data.data_type("Hello");
	
		
		
		
		
		
		
		
		
		
		
		
		
		
}
