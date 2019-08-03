#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef map<string,int> phonemap;
int main()
{
	string name;
	int number;
	phonemap phone;
	cout<<"Enter three sets of name and number:\n";
	
	for(int i=0;i<3;i++)
	{
			cin>>name;
			cin>>number;
			phone[name]=number;
	}
	
	phone["jacob"]=123;
	phone.insert(pair<string,int>("rohit",231));
	cout<<"\nSize of map:"<<phone.size();
	cout<<"\nList of telephone no.\n";
	phonemap::iterator i;
	for(i=phone.begin();i!=phone.end();i++)
	{
		cout<<(*i).first<<" "<<(*i).second<<"\n";
	}
	
}
