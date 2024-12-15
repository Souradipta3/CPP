// Example: define member function without argument within the class

#include<iostream>
using namespace std;

class Person
{
	int id;
	char name[100];
	
	public:
		void set_p()
		{
			cout<<"Enter the Id:";
			cin>>id;
			fflush(stdin);
			cout<<"Enter the Name:";
			cin.get(name,100);
		}
	
		void display_p()
		{
			cout<<endl<<id<<"\t"<<name<<"\t";
		}
};

class Student: private Person
{
	char course[50];
	int fee;
	
	public:
	void set_s()
		{
			set_p();
			cout<<"Enter the Course Name:";
			fflush(stdin);
			cin.getline(course,50);
			cout<<"Enter the Course Fee:";
			cin>>fee;
		}
		
		void display_s()
		{
			display_p();
			cout<<course<<"\t"<<fee<<endl;
		}
};

int main()
{
	Student s;
	s.set_s();
	s.display_s();
	return 0;
}
//public can be accessed anywhere in the code
//private can be accessed only in the class defined itself
//protected can be accessed both in the base class and derieved class