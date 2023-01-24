#include <bits/stdc++.h>
using namespace std;

// @author: stash ¯\_(ツ)_/¯
#define FAST cin.tie(0), cout.tie(0),ios_base::sync_with_stdio(false);
#define int long long
#define debug(x) cerr << "[" <<#x << " = " << x << "]" << endl
#define debug2(x, y) cerr << "[" <<#x << " = " << x << "]" << ", [" <<#y << " = " << y << "]" << endl
#define all(x) (x).begin(),(x).end()
#define endl "\n"

class DisjointSet {
public: 
    vector<int> rank, parent, size,color,mini,maxi; 
    DisjointSet(int n) {
        parent.resize(n+1);
        size.resize(n+1);
        rank.resize(n+1);
        mini.resize(n+1);
        maxi.resize(n+1);
        color.resize(n+1);
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
            mini[i]=i;
            maxi[i]=i;
            rank[i]=1;
            size[i]=1;
        }
    }

    int get(int node) {
        if(node == parent[node])
            return node; 
        return parent[node] = get(parent[node]); 
    }

        void unionByRank(int u,int v)
    {
        u=get(u);
        v=get(v);
        if(u==v)
            return;
        if(rank[u]==rank[v])
            rank[u]++;
        if(rank[u]<rank[v])
            swap(u,v);

        size[u]+=size[v];
        parent[v]=u;
        mini[u]=min(mini[u],mini[v]);
        maxi[u]=max(maxi[u],maxi[v]);
    }
};

int32_t main()
{
    FAST
    int n,q;
    cin >> n >> q;
    vector<int> vec(n);
    DisjointSet ds(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        vec[i]=x;
        ds.color[i]=x;
    }
    for(int i=1;i<n;i++)
    {
        if(vec[i]==vec[i-1])
            ds.unionByRank(i,i-1);
    }
    
    
    while(q--)
    {
        int ind,col;
        cin >> ind >> col;
        int x=ds.get(ind);
        ds.color[x]=col;
        if(ds.mini[x]-1>=0 && ds.color[ds.mini[x]-1]==ds.color[x])
            ds.unionByRank(x,ds.mini[x]-1);
        
        if(ds.maxi[x]+1<=n && ds.color[ds.maxi[x]+1]==ds.color[x])
            ds.unionByRank(x,ds.maxi[x]+1);

        for(int i=0;i<n;i++)
        {   
            cout << ds.color[ds.get(i)] << " ";
        }
        cout << endl;
    }
}