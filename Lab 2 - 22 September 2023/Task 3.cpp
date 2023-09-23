#include<iostream>
using namespace std;
class Minor{
	private:
		string name,father_name,address;
		int age;
		friend class checkMinor;
		public:
				Minor(int a){
			if(a<0){
				cout<<"\"Age can't be negative\"";
			}
			else{
//				cout<<"aaaasaa";
				age=a;
			}
		}
};
class checkMinor{
	public:
	
		void is_Minor(Minor obj){
			if(obj.age<18){
				cout<<"Person is minor\n";
			}
			else{
				cout<<"Person is not minor\n";
			}
		}
		int is_Minor(Minor obj1,Minor obj2){
			if(obj1.age<18 && obj2.age<18){
				if(obj1.age<obj2.age)
				return(obj1.age);
				else
				return(obj2.age);
			}
				else{
				cout<<"Both are not minor\n";
//				return 0;
			}
		}
			int is_Minor(Minor obj1,Minor obj2,Minor obj3){
			
				if(obj1.age<obj2.age&&obj1.age<obj3.age)
				return(obj1.age);
				else if(obj2.age<obj1.age&&obj2.age<obj3.age)
				return(obj2.age);
				else
				return(obj3.age);
			}
		
		
};

int main(){
	Minor obj1(17);
	Minor obj2(10);
	Minor obj3(5);
	checkMinor obj;
	cout<<obj.is_Minor(obj1,obj2,obj3)<<endl;
	cout<<obj.is_Minor(obj1,obj2)<<endl;
	obj.is_Minor(obj1);
}
