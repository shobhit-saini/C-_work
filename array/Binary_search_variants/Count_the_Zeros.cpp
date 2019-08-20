#include<iostream>
using namespace std;
	int BS(int* ar, int low, int high)
	{
		if(!(low <= high))
			return -1;
		else
		{
			int mid = (low + high)/2;
			if(ar[mid] == 0 && ar[mid-1] != 0)
			{
				return mid;
			}
			if(ar[mid] == 1)
			BS(ar, mid+1, high);
			else
			BS(ar, low, mid-1);
		}
	}
	int main()
	{
		int n, res = 0, i = 0;
		cout<<"Enter the size of an array:";
		cin>>n;
		int* ar = new int[n];
		for(i = 0; i < n; i++)
		{
			cin>>ar[i];
		}
		res = BS(ar, 0, n-1);
		cout<<"Number of 0 in the array:"<<res;
	return 0;
	}
