#include<iostream>
using namespace std;
int main()
{
	int n, i = 0, sum = 3; 
	cout << "Enter the no.:";
	cin >> n;
	int lookup[n];
	lookup[0] = 1;
	lookup[1] = 2;
	for(i = 2; i < n; i++)
	{
		lookup[i] = lookup[i-1] + lookup[i-2];
		if(lookup[i] > 4000000)
		{
			break;
		}
		sum = sum + lookup[i];
	}
	cout << sum;
}
