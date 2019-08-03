#include<iostream>
using namespace std;
class person
{
	int age;
	char name[30];
	public:
		void getdata()
		{
			cout<<"Enter the name:";
			cin>>name;
			cout<<"\nEnter age:";
			cin>>age;
		}
		void displaydata()
		{
			cout<<"Name:"<<name;
			cout<<"\nAge:"<<age;
		}
	
};
	int main()
	{
		person p;
		p.getdata();
		p.displaydata();
	return 0;
	}
