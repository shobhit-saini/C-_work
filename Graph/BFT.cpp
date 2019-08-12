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
		for(int i = 0; i < V; i++)
		{
			cout<<(i)<<"->";
			for(it = adj[i].begin();it != adj[i].end(); it++)
			{
				cout<<*it<<" ";
			}
			cout<<"\n";
		}
	}
	void Graph::BFS(int s)
	{
		bool* Visited = new bool[V];
		//Mark all the vetices as not visited
		for(int i = 0; i < V; i++)
		{
			Visited[i] = 0;
		}
		
		//Create a queue for BFS
		list<int> queue;
		Visited[s] = 1;
		queue.push_back(s);
		list<int>::iterator it;
		while(!queue.empty())
		{
			s = queue.front();
			cout<<s<<" ";
			queue.pop_front();
			for(it = adj[s].begin(); it != adj[s].end(); it++)
			{
				if(Visited[*it] != 1)
				{
				queue.push_back(*it);
				Visited[*it] = 1;
				}
			}		
		}
		
	}
int main()
{
	int V,s;
	Graph g(4);
	g.addedge(0, 1); 
    g.addedge(0, 2); 
    g.addedge(1, 2); 
    g.addedge(2, 0); 
    g.addedge(2, 3); 
    g.addedge(3, 3); 
  	g.Print_List();
	  cout<<"Enter the starting point:";
	  cin>>s;
	  g.BFS(s);
}
