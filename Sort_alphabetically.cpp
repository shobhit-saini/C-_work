#include <iostream>
#include<string>
#include<cstring>
using namespace std;
void swap(string*,string*);
int main()
{
    string temp;
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    string *str=new string[size];
    int j,res,round;
    fflush(stdin);
    for(int i=0;i<size;i++)
    {
    	cout<<i;
        getline(cin,str[i]);
    }
	  for(int i=size-1;i>=0;i--)
     {
         for(j=0;j<i;j++)
         {
             if(strcmp(str[j].c_str(),str[j+1].c_str())>0)
             swap(&str[j],&str[j+1]);
         }
     }
	   for(int i=0;i<size;i++)
    {
      cout<<endl<<str[i];
    }
return 0;
}

void swap(string *i,string *j)
{
    string temp;
    temp=*i;
    *i=*j;
    *j=temp;
}
