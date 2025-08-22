#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	public:
		string name;
		int age;
};
class Student : public Person
{
	
};
class Teacher : public Person
{
	
};
int main()
{
	Student s1;
	s1.name="Mahek Savaliya";
	s1.age=21;
	
	cout<<"Student name is :"<<s1.name<<endl;
	cout<<"Student age is : "<<s1.age<<endl;
	
	Teacher t1;
	t1.name="Dhruv Patel";
	t1.age=24;
	
	cout<<"Teacher name is :"<<t1.name<<endl;
	cout<<"Teacher age is :"<<t1.age<<endl;
	return 0;
}
