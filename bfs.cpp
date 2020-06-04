#include <bits/stdc++.h> 
using namespace std; 
vector<int> bfs;
queue<int> que;
void bfs_traversal(int u,int visited[],vector<int> a[])
{
    int q;
    bfs.push_back(u);
    visited[u]=1;
    que.push(u);
    while(!que.empty())
    {
        q=que.front();
        que.pop();
        for(auto j=a[q].begin();j!=a[q].end();j++)
        {
            if(visited[*j]==0)
            {
                visited[*j]=1;
                que.push(*j);
                bfs.push_back(*j);
            }
        }
    }
}
int main()
{
    int n,x,y,edges,i;
    cout<<"ENTER N VERTICES:"<<endl;
    cin>>n;
    vector<int> a[n];
    cout<<"ENTER NO OF EDGES:"<<endl;
    cin>>edges;
    for(i=0;i<edges;i++)
    {
        cout<<"ENTER X"<<i+1<<":"<<endl;
        cin>>x;
        cout<<"ENTER Y"<<i+1<<":"<<endl;
        cin>>y;
        a[x].push_back(y);
    }
    int visited[n];
    for(i=0;i<n;i++)
        visited[i]=0;
        bfs_traversal(2,visited,a);
    cout<<"--BFS TRAVERSAL--";
    for(auto j=bfs.begin();j!=bfs.end();j++)
        cout<<*j<<" ";
}