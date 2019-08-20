#include<iostream>
using namespace std;
	int main()
	{
		int n = 0, i = 0;
		
		
		cout<<"Enter the size of an array:";
		cin>>n;
		
		int* ar = new int[n];
		int* aux = new int[n];
		int count[3] = {0};

		for(i = 0; i < n; i++)
		{
			cin>>ar[i];
			count[ar[i]]++;
		}

		for(i = 1; i < 3; i++)
		{
			count[i] = count[i] + count[i-1];
		}
		
		for(i = 0; i < n; i++)
		{
			aux[count[ar[i]] - 1] = ar[i];
			count[ar[i]]--;
		}
		
		cout<<"Sorted array is:";
		for(i = 0; i < n; i++)
		{
			cout<<aux[i]<<"\t";
		}
	return 0;
	}
