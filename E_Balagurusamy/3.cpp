#include<iostream>
using namespace std;
class person
{
	int age;
	char name[30];
	public:
		void getdata();
		void displaydata();
	
};
	void person::getdata()
	{
		cout<<"Enter the name:";
		cin>>name;
		cout<<"\nEnter age:";
		cin>>age;	
	}
	void person::displaydata()
	{
		cout<<"Name:"<<name;
		cout<<"\nAge:"<<age;
	}
int main()
{
person p;
p.getdata();
p.displaydata();
return 0;
}
