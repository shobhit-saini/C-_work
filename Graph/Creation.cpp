#include<iostream>
#include<list>
using namespace std;
	class Graph
	{
			int V;//It is the number of vertices
			list<int>*adj;//Pointer to an array how containing adjacent list
		public:
			Graph(int V);//constructor
			void addedge(int v,int w);//Function to add an edge to the graph
			void Print_List();	
	};
	Graph::Graph(int V)
	{
		this->V=V;
		adj=new list<int>[V];
	}
	void Graph::addedge(int v,int w)
	{
		adj[v - 1].push_back(w);//add w to v's list
	}
	void Graph::Print_List()
	{
		list<int>::iterator it;
		for(int i = 0; i < V; i++)
		{
			cout<<(i+1)<<"->";
			for(it = adj[i].begin();it != adj[i].end(); it++)
			{
				cout<<*it<<" ";
			}
			cout<<"\n";
		}
	}
int main()
{
	int V;
	cout<<"Enter the no. of vertices of Graph:";
	cin>>V;
	Graph g(4);
	g.addedge(1,2);
	g.addedge(1,3);
	g.addedge(1,4);
	g.addedge(2,3);
	g.addedge(4,3);
	g.Print_List();
	
}
