#include<iostream>
using namespace std;
int n=10;
int main()
{
	int n=20;
	{
		int n=30;
		cout<<"Inner block:\n";
		cout<<"n="<<n;
		cout<<"\n::n="<<::n;
	}
	cout<<"\nOutside block:\n";
	cout<<"n="<<n;
	cout<<"\n::n="<<::n;
return 0;
}
