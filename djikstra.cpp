#include <bits/stdc++.h> 
using namespace std; 
typedef pair<int,int> p;
void djikstra(vector<p> a[],int s,int n) 
{
    int i,dist[n],visit[n];
    for(i=0;i<n;i++)
    {
        dist[i]=INT_MAX;
        visit[i]=0;
    }
    priority_queue<p,vector<p>,greater<p>> pq;
    pq.push(make_pair(0,s));
    dist[s]=0;
    visit[s]=1;
    while(pq.empty()==false)
    {
        int u=pq.top().second;
        pq.pop();
        visit[u]=1;
        for(auto j:a[u])
        {
            int v=j.first;
            int w=j.second;
            if(dist[v]>dist[u]+w && visit[v]==0)
            {
                dist[v]=dist[u]+w;
                pq.push(make_pair(dist[v],v));
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<i<<"   "<<dist[i]<<endl;
}
int main()
{
    int n,x,y,n_e,i,wt;
    cout<<"ENTER NO OF VERTICES:"<<endl;
    cin>>n;
    vector<p> adj[n];
    cout<<"ENTER NO OF EDGES:"<<endl;
    cin>>n_e;
    for(i=0;i<n_e;i++)
    {
        cout<<"ENTER X"<<i+1<<":"<<endl;
        cin>>x;
        cout<<"ENTER Y"<<i+1<<":"<<endl;
        cin>>y;
        cout<<"ENTER WEIGHT"<<i+1<<":"<<endl;
        cin>>wt;
        a[x].push_back(make_pair(y,wt));
        a[y].push_back(make_pair(x,wt));
    }
    djikstra(a,0,n);
}