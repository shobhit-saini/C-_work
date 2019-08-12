#include<iostream>
#include<map>
using namespace std;
	int main()
	{
		//Empty map container
		map<int, int> record1;
		//Inserting into the map
		record1.insert(pair<int, int>(1,20));
		record1.insert(pair<int, int>(2,30));
		record1.insert(pair<int, int>(3,40));
		record1.insert(pair<int, int>(4,50));
		record1.insert(pair<int, int>(5,60));
		record1.insert(pair<int, int>(6,70));
		
		//Printing the map1
		map<int, int>:: iterator it;
		cout<<"Record map is:\n";
		cout<<"\tKEY\tELEMENT\n";
		for (it = record1.begin(); it != record1.end(); it++)
		{
			cout<<"\t"<<it->first<<"\t"<<it->second<<"\n";
		}
		
		//Assigning the elements from one map to another map
		
		map<int, int> record2(record1.begin(), record1.end());
		
		//Printing the map2
		
		cout<<"Record of map2 is:\n";
		cout<<"\tKEY\tELEMENT\n";
		for(it = record2.begin(); it != record2.end(); it++)
		{
			cout<<"\t"<<it->first<<"\t"<<it->second<<"\n";	
		}
		
		//Remove all elements upto key=3
		record2.erase(record2.begin(), record2.find(4));
		cout<<"Record2 after removal is:\n";
		cout<<"\tKEY\tELEMENT\n";
		for(it = record2.begin(); it != record2.end(); it++)
		{
			cout<<"\t"<<it->first<<"\t"<<it->second<<"\n";	
		}
	}
