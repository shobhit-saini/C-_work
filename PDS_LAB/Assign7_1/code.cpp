#include<iostream>
using namespace std;
int main()
{
	int breakpoint, i, j, N, c;
	cout << "Enter the size of an array:";
	cin >> N;
	int arr[N];
	cout << "Enter the elements of an array:";
	for(i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for(i = 0; i < N; i++)
	{
		if(arr[i] > 0)
		{
			breakpoint = i;
			break;
		}
	}
	i = breakpoint - 1; j = breakpoint;
	c = arr[i] + arr[j] ;
	for(; i >= 0, j < N; )
	{
	
		if(c > 0)
		{
			i--;
			c += arr[i];
		}
		else if(c < 0)
		{
			j++;
			c += arr[j];
		}
		else
		{
			cout << i << ":" << j;
			break;
		}
	}
}
