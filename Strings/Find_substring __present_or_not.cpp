#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s, t;
	int i, j, k;
	cout<<"Enter the string:";
	cin>>s;
	cout<<"Enter the another string:";
	cin>>t;
	for(i = 0; i < strlen(s.c_str()); i++)
	{
		k = 0;
		for(j = 0; j < strlen(t.c_str()); j++)
		{
			if(s[i+j] == t[j])
			{
				k++;
			}
			else
			{
				break;
			}
		}
		if(k ==  strlen(t.c_str())-1)
		{
			cout<< "substring found";
			return 0;
		}
	}
	cout<<"substring not found!!!!!!!";
	return 0;
}
