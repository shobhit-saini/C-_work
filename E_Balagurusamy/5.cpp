#include<iostream>
using namespace std;
int main()
{
	int size;
	int *p=new int;//Dynamically created the variable
	if(!p)
	{
		cout<<"Memory allocation failed:";
	}
	int *q=new int(24);//Dynamically created the variable and assign the value to it
	if(!q)
	{
		cout<<"Memory allocation failed";
	}
	cout<<"\nq="<<*q;
	cout<<"\nDynamically created the array";
	cout<<"\nEnter the size of an array:";
	cin>>size;
	int *arr=new int[size]; 
	if(!arr)
	{
		cout<<"Memory allocation failed:";
	}
	return 0;
}
