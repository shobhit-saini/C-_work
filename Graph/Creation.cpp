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
			void BFS(int s);//Print the BFS traversal from the starting point s	
			void Print_List();	
	};
	Graph::Graph(int V)
	{
		this->V=V;
		adj=new list<int>[V];
	}
	void Graph::addedge(int v,int w)
	{
		adj[v].push_back(w);//add w to v's list
	}
	void Graph::Print_List()
	{
		list<int>::iterator it;
		for(it = adj.begin();it != adj.end;it++)
		{
			cout<<*it;
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
	g.Print_List();	
}
