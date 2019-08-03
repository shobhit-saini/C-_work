#include<iostream>
#include<vector>
using namespace std;
	void display(vector<int> &v)
	{
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
	int main()
	{
		vector<int> v1;
		cout<<"Initial Size="<<v1.size()<<"\n";
		int x;
		cout<<"\nEnter the five elements in array:\n";
		for(int i=0;i<5;i++)
		{
			cin>>x;
			v1.push_back(x); 
		}
		cout<<"Size after inserting the 5 elements:"<<v1.size();
		cout<<"Current contents:\n";
		display(v1);
		//Inserting the elements
		vector<int>::iterator itr=v1.begin();
		itr=itr+3;
		v1.insert(itr,2,200);
		display(v1);
		//removing 4th elements
		v1.erase(v1.begin()+3);
		display(v1);
	return 0;
	}
