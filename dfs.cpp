#include <iostream> 
#include <list> 
using namespace std;  
class DFSGraph 
{ 
int V;
list<int> *adjList;
void DFS_util(int v, bool visited[]);
public: 
DFSGraph(int V)
    {
 this->V = V; 
 adjList = new list<int>[V]; 
    }
void addEdge(int v, int w)
{
adjList[v].push_back(w);
}
void DFS(); 
}; 
void DFSGraph::DFS_util(int v, bool visited[]) 
{ 
visited[v] = true; 
cout << v << " "; 
list<int>::iterator i; 
for(i = adjList[v].begin(); i != adjList[v].end(); ++i) 
if(!visited[*i]) 
DFS_util(*i, visited); 
} 
void DFSGraph::DFS() 
{ 
bool *visited = new bool[V]; 
for (int i = 0; i < V; i++) 
	visited[i] = false; 
for (int i = 0; i < V; i++) 
	if (visited[i] == false) 
DFS_util(i, visited); 
} 
int main() 
{ 
int n,n_e,x,y;
cout<"ENTER NO OF VERTICES:"<<endl;
cin>>n;
cout<<"ENTER NO OF EDGES:"<<endl;
cin>>n_e;
DFSGraph gdfs(n);
for(int i=0;i<n_e;i++)
{
	cout<<"ENTER X:"<endl;
	cin>>x;
	cout<"ENTER Y:"<<endl;
	cin>>y;
	gdfs.addEdge(x,y);
} 
cout <<"--DFS ORDER FOR GIVEN TRAVERSAL--"<<endl; 
gdfs.DFS(); 
return 0; 
}