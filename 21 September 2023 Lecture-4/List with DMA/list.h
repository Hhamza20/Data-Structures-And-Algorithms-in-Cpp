#include<iostream>
using namespace std;
template<class T>
class List
{
   template<class U>
	friend std::ostream& operator<<( std::ostream& , List<U>& ); //Overloading << Operator

    public:
		List(int);//set size to -1 and create an array on heap using new operator of the size provided to the constructor and assign the array to ptr and arr
		~List();//delete the array 'arr' created on heap
		void addElement(T, int);//add passed element(first argument) to the array at passed index(second argument)
		void addElement(T);//add passed element to the end off array
		void deleteElement(T);//delete the first occurance of passed element in the array
		
		T* arr;
		T* ptr;
		int filled_size;
		int total_size;
		
		void start();//move the ptr to the start of the array
		void end();//move the ptr to the end of the array
		void next();//move the ptr to the next element of the array
		void previous();//move the ptr to the previous element of the array
	

};






//#endif // VECTOR_H_INCLUDED