#include<iostream>
using namespace std;
class OperatorOverloading
{
	public:
	int count;
		OperatorOverloading(){count = 5 ;}
		OperatorOverloading(int c)
		{
			count = c;
		}
		void operator ++()
		{
			count = count + 1;
		}
		void operator --()
		{
			count = count - 1;
		}
		OperatorOverloading operator + (OperatorOverloading &ob2)
		{
			OperatorOverloading ob;
			ob.count = count + ob2.count;
		}
		OperatorOverloading operator - (OperatorOverloading &ob2)
		{
			OperatorOverloading ob;
			ob.count = count - ob2.count;
		}
		void display()
		{
			cout<<"count : "<<count<<endl;
		}
};
//int OperatorOverloading::count= 5;
class copyconstructor
{
	public:
		int var;

		copyconstructor(int j)
		{
			var = j;
		}
		//copy constructor
		copyconstructor(copyconstructor &obb)
		{
			var  = obb.var;
		}
		void display()
		{
			cout<<"var :"<<var<<endl;
		}
};
class assignment
{
	public:
		int *ptr;
		assignment(){}
		assignment(int i)
		{
			ptr = new int(i);
		}
		//assignment operator overloading
		assignment & operator = (assignment &ob3)
		{
			if(this!= &ob3)
				*ptr = *(ob3.ptr);
			return *this;
		}
		void display()
		{
			cout<<"*ptr :"<<*ptr<<endl;
		}
};
int main()
{
	OperatorOverloading obj;
	obj.display();
	--obj;
	obj.display();
	++obj;
	obj.display();
	OperatorOverloading obj1(4);
	OperatorOverloading obj2(2);
	OperatorOverloading obj3;// = obj1 + obj2;
	obj3 = obj1 + obj2;
	obj3.display();
	OperatorOverloading obj4;//  = obj1 - obj2;
	obj4 = obj1 - obj2;
	obj4.display();
	OperatorOverloading obj5;//  = obj1 - obj2;
	obj5 = obj4;
	obj5.display();
	assignment object1(6);
	assignment object2;// = object1;
	object2 = object1;
	object2.display();
	copyconstructor object3(10);
	copyconstructor object4 = object3;
	object3.display();


	return 0;
}
