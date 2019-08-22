#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
	int main()
	{
		string str;
		vector<int> result;
		str = "23,2300,45";
		char ch;
		int temp, i;
		stringstream ss(str);
		while( ss>>temp )
		{
			result.push_back(temp);
			ss>> ch;
		}
		vector<int>:: iterator itr;
		for(itr = result.begin(); itr != result.end(); itr++)
		{
			cout<< *itr<<"\n";
		}

	}
