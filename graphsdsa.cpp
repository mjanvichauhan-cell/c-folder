//1.adjacnecy matrix undirected 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//     int adj[4][4]={0};
//     int edges[][2]={
//         {0,1},
//         {0,2},
//         {1,2},
//         {2,3}
//     };
//     int m=4;
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u][v]=1;
//         adj[v][u]=1; //for directed use only adj[u][v]=1;
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//             cout<<adj[i][j]<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

//2.adjacnecy list
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n=4;
//     vector<int> adj[4];
//     int edges[][2]={
//         {0,1},
//         {0,2},
//         {1,2},
//         {2,3}
//     };
//     int m=4;
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<i<<" -> ";
//         for(int j=0;j<adj[i].size();j++)
//             cout<<adj[i][j]<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

//3.breadth first search 
// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+2;
// bool vis[N];
// vector<int> adj[N];
// int main(){
//     for(int i=0;i<N;i++){
//         vis[i]=0;
//     }
//     int n,m;
//     cin>> n>>m;
//     int x,y;
//     for(int i=0;i<m;i++){
//         cin>>x>>y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     queue<int> q;
//     q.push(1);
//     vis[1]=true;
//     while(!q.empty()){
//         int node=q.front();
//         q.pop();
//         cout<<node<<endl;
//         vector<int>:: iterator it;
//         for(it=adj[node].begin();it!=adj[node].end();it++){
//             if(!vis[*it]){
//                 vis[*it]=1;
//                 q.push(*it);
//             }
//         }
//     }
// }

//4.depth first search 
// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+2;
// bool vis[N];
// vector<int> adj[N];
// void dfs(int node){
//     vis[node]=1;
//     cout<<node<<" ";
//     vector<int>:: iterator it;
//         for(it=adj[node].begin();it!=adj[node].end();it++){
//             if(vis[*it]);
//             else dfs(*it);
//         }
//     cout<<node<<" ";//postorder
// }
// int main(){
//     int n,m;
//     cin>> n>>m;
//     for(int i=0;i<=n;i++){
//         vis[i]=false;
//     }
//     int x,y;
//     for(int i=0;i<m;i++){
//         cin>>x>>y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     dfs(1);
//     return 0;
// }

//5.cycle detection undirected dfs
// #include<bits/stdc++.h>
// using namespace std;
// bool iscycle(int src,vector<vector<int>> &adj,vector<bool> &visit,int parent){
//     visit[src]=true;
//     for(auto i:adj[src]){
//         if(i!=parent){
//             if(visit[i]){
//                 return true;
//             }
//             if(!visit[i] and iscycle(i,adj,visit,src)){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//        int n,m;
//     cin>>n>>m;
//     int cnt=0;
//     vector<vector<int>> adjl(n);
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adjl[u].push_back(v);
//         adjl[v].push_back(u);
//     }
//     bool cycle=false;
//     vector<bool> visited(n,false);
//     for(int i=0;i<n;i++){
//         if(!visited[i] && iscycle(i,adjl,visited,-1)){
//             cycle=true;
//         }
//     }
//     if(cycle) cout<<"present";
//     else cout<<" not present";
//     return 0;
// }

//6.cycle detection undirected bfs
// #include <iostream>
// #include <vector>
// #include <list>
// #include <queue>
// using namespace std;
// class Graph {
//     int V;
//     list<int>* l;
// public:
//     Graph(int V) {
//         this->V = V;
//         l = new list<int>[V];
//     }
//     void addEdge(int u, int v) {
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }
//     bool isCycleUndirBFS(int src, vector<bool>& vis) {
//         queue<pair<int, int>> q;    
//         q.push({src, -1});
//         vis[src] = true;
//         while (!q.empty()) {
//             int u = q.front().first;
//             int parU = q.front().second;
//             q.pop();
//             for (int v : l[u]) {
//                 if (!vis[v]) {
//                     vis[v] = true;
//                     q.push({v, u});
//                 } 
//                 else if (v != parU) {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
//     bool isCycle() {
//         vector<bool> vis(V, false);
//         for (int i = 0; i < V; i++) {
//             if (!vis[i]) {
//                 if (isCycleUndirBFS(i, vis)) {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };
//     int main() {
//     Graph g(5);
//     g.addEdge(0, 1);
//     g.addEdge(1, 2);
//     g.addEdge(2, 3);
//     g.addEdge(3, 4);
//     g.addEdge(4, 1);   // creates cycle
//     if(g.isCycle())
//         cout << "Cycle Detected";
//     else
//         cout << "No Cycle";
//     return 0;
// }

//7.topological sort bfs
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int cnt=0;
//     vector<vector<int>> adjl(n);
//     vector<int> indegree(n,0);
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adjl[u].push_back(v);
//         indegree[v]++;
//     }
//     queue<int> q;
//     for(int i=0;i<n;i++){
//         if(indegree[i]==0){
//             q.push(i);
//         }
//     }
//     while(!q.empty()){
//         cnt++;
//         int x=q.front();
//         q.pop();
//         cout<<x<<" ";
//         for(auto it:adjl[x]){
//             indegree[it]-- ;
//             if(indegree[it]==0){
//                 q.push(it);
//             }
//         }
//     }
//     return 0;
// }

//8.topo sorting dfs
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;
// void dfs(int node, vector<vector<int>>& adj, 
//          vector<int>& visited, stack<int>& st) {
//     visited[node] = 1;
//     for(auto it : adj[node]) {
//         if(!visited[it]) {
//             dfs(it, adj, visited, st);
//         }
//     }
//     st.push(node);
// }
// vector<int> topoSort(int V, vector<vector<int>>& adj) {
//     vector<int> visited(V, 0);
//     stack<int> st;
//     for(int i = 0; i < V; i++) {
//         if(!visited[i]) {
//             dfs(i, adj, visited, st);
//         }
//     }
//     vector<int> topo;
//     while(!st.empty()) {
//         topo.push_back(st.top());
//         st.pop();
//     }
//     return topo;
// }
// int main() {
//     int V = 6;
//     vector<vector<int>> adj(V);
//     adj[5].push_back(2);
//     adj[5].push_back(0);
//     adj[4].push_back(0);
//     adj[4].push_back(1);
//     adj[2].push_back(3);
//     adj[3].push_back(1);
//     vector<int> result = topoSort(V, adj);
//     cout << "Topological Order: ";
//     for(int node : result) {
//         cout << node << " ";
//     }
//     return 0;
// }

//9. bipartite graph
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> adj;
// vector<bool> vis;
// vector<int> col;
// bool bipart;
// void color(int u,int curr){
//     if(col[u]!=-1 and col[u]!= curr){
//         bipart=false;
//         return ;
//     }
//     col[u]=curr;
//     if(vis[u]) return ;
//     vis[u]= true;
//     for(auto i: adj[u]){
//         color(i,curr xor 1);
//     }
// }
// int main(){
//     bipart=true;
//     int n,m;
//     cin>>n>>m;
//     adj=vector<vector<int>>(n);
//     vis=vector<bool>(n,false);
//     col=vector<int>(n,-1);
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     for(int i=0;i<n;i++){
//         if(!vis[i]){
//             color(i,0);
//         }
//     }
//     if(bipart) cout<<"graph is bipart";
//     else cout<<"not";
//     return 0;
// }

//10.no of egdes and nodes 
// #include<bits/stdc++.h>
// using namespace std;
// #define vi vector<int>
// #define vvi vector<vi>
// #define pii pair<int,int>
// #define vii vector<pii>
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define ff first
// #define ss second 
// #define setBits(x) builtin_popcount(x)
// const int N=1e5+2,MOD =1e9+2;
// vi adj[N];
// bool vis[N];
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vvi adjm(n+1,vi(n+1,0));
//     rep(i,0,m){
//         int x,y;
//         cin>>x>>y;
//         adjm[x][y]=1;
//         adjm[y][x]=1;
//     }
//     rep(i,1,n+1){
//         rep(j,1,n+1){
//             cout<<adjm[i][j];
//         }
//         cout<<endl;
//     }
//     if(adjm[3][7]==1){
//         cout<<" edge ";
//     }
//     else cout<<"node edge";
//     cin>>n>>m;
//     rep(i,0,m){
//         int x,y;
//         cin>>x>>y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     rep(i,1,n+1){
//         cout<<i<<"->";
//         for(int x:adj[i]){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//11.cycle detection directed dfs
// #include<bits/stdc++.h>
// using namespace std;
// bool iscycle(int src,vector<vector<int>> &adj,vector<bool> &visited,vector<int> &stck){
//     stck[src]=true;
//     if(!visited[src]){
//         visited[src]=true;
//         for(auto i:adj[src]){
//             if(!visited[i] and iscycle(i,adj,visited,stck)) return true;
//             if(stck[i]) return true;
//         }
//     }
//     stck[src]=false;
//     return false;
// }
// int main(){
//        int n,m;
//     cin>>n>>m;
//     int cnt=0;
//     vector<vector<int>> adjl(n);
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adjl[u].push_back(v);
//     }
//     bool cycle=false;
//     vector<bool> visited(n,false);
//     vector<int> stck(n,0);
//     for(int i=0;i<n;i++){
//         if(!visited[i] && iscycle(i,adjl,visited,stck)){
//             cycle=true;
//         }
//     }
//     if(cycle) cout<<"present";
//     else cout<<" not present";
//     return 0;
// }

//12.cycle detection directed bfs
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// int main()
// {
//     int n=4;
//     vector<int> adj[4];
//     int edges[][2]={
//         {0,1},
//         {1,2},
//         {2,3},
//         {3,1}
//     };
//     int m=4;
//     vector<int> indegree(n,0);
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         indegree[v]++;
//     }
//     queue<int> q;
//     for(int i=0;i<n;i++)
//     {
//         if(indegree[i]==0)
//             q.push(i);
//     }
//     int count=0;
//     while(!q.empty())
//     {
//         int node=q.front();
//         q.pop();
//         count++;
//         for(int neighbour:adj[node])
//         {
//             indegree[neighbour]--;
//             if(indegree[neighbour]==0)
//                 q.push(neighbour);
//         }
//     }
//     if(count==n)
//         cout<<"Cycle Not Present";
//     else
//         cout<<"Cycle Present";
//     return 0;
// }

//13.connected component 
// #include<bits/stdc++.h>
// using namespace std;
// vector<bool> vis;
// int n,m;
// vector<vector<int>> adj;
// vector<int> comp;
// int get_comp(int idx){
//     if(vis[idx]) return 0;
//     vis[idx]=true;
//     int ans =1;
//     for(auto i:adj[idx]){
//         if(!vis[i]){
//             ans+=get_comp(i);
//             vis[i]=true;
//         }
//     }
//     return ans;
// }
// int main(){
//      cin>>n>>m;
//      adj=vector<vector<int>>(n);
//      vis=vector<bool>(n);
//      for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//      }
//      for(int i=0;i<n;i++){
//         if(!vis[i]){
//             comp.push_back(get_comp(i));
//         }
//      }
//      for(auto i: comp){
//         cout<<i<<" ";
//      }
//      return 0;
// }

//14.n freinds 2 person select such that they are not related to each other 
// #include<bits/stdc++.h>
// using namespace std;
// vector<bool> vis;
// int n,m;
// vector<vector<int>> adj;
// vector<int> comp;
// int get_comp(int idx){
//     if(vis[idx]) return 0;
//     vis[idx]=true;
//     int ans =1;
//     for(auto i:adj[idx]){
//         if(!vis[i]){
//             ans+=get_comp(i);
//             vis[i]=true;
//         }
//     }
//     return ans;
// }
// int main(){
//      cin>>n>>m;
//      adj=vector<vector<int>>(n);
//      vis=vector<bool>(n);
//      for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//      }
//      for(int i=0;i<n;i++){
//         if(!vis[i]){
//             comp.push_back(get_comp(i));
//         }
//      }
//      long long ans=0;
//      for(auto i:comp){
//         ans+=i*(n-i);
//      }
//      cout<<(ans/2)<<" ";
//      return 0;
// }

//15.cycle detection in undirected using dsu
// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+6;
// vector<int> parent(N);
// vector<int> sz(N);
// void makeset(int v){
//     parent[v]=v;
//     sz[v]=1;
// }
// int findset(int v){
//     if(v==parent[v]) return v;
//     return parent[v]=findset(parent[v]);
// }
// void unionset(int a,int b){
//     a=findset(a);
//     b=findset(b);
//     if(a!=b){
//         if(sz[a]<sz[b]){
//             swap(a,b);
//         }
//         parent[b]=a;
//         sz[a]+=sz[b];
//     }
// }
// int main(){
//       for(int i=0;i<N;i++){
//         makeset(i);
//       }
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> adj;
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj.push_back({u,v});
//     }
//     bool cycle=false;
//     for(auto i:adj){
//         int u=i[0];
//         int v=i[1];
//         int x=findset(u);
//         int y=findset(v);
//         if(x==y){cycle=true;}
//         else unionset(u,v);
//     }
//     if(cycle) cout<<"true";
//     else cout<<false;
//     return 0;
// }

//16.kosarju algo
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// void dfs1(int node, vector<int> adj[], vector<bool> &visited, stack<int> &st)
// {
//     visited[node]=true;
//     for(int neighbour:adj[node])
//     {
//         if(!visited[neighbour])
//             dfs1(neighbour,adj,visited,st);
//     }
//     st.push(node);
// }
// void dfs2(int node, vector<int> transpose[], vector<bool> &visited)
// {
//     visited[node]=true;
//     cout<<node<<" ";
//     for(int neighbour:transpose[node])
//     {
//         if(!visited[neighbour])
//             dfs2(neighbour,transpose,visited);
//     }
// }
// int main()
// {
//     int n=5;
//     vector<int> adj[5];
//     int edges[][2]={
//         {1,0},
//         {0,2},
//         {2,1},
//         {0,3},
//         {3,4}
//     };
//     int m=5;
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//     }
//     vector<bool> visited(n,false);
//     stack<int> st;
//     for(int i=0;i<n;i++)
//     {
//         if(!visited[i])
//             dfs1(i,adj,visited,st);
//     }
//     vector<int> transpose[5];
//     for(int i=0;i<n;i++)
//     {
//         visited[i]=false;
//         for(int neighbour:adj[i])
//             transpose[neighbour].push_back(i);
//     }
//     while(!st.empty())
//     {
//         int node=st.top();
//         st.pop();
//         if(!visited[node])
//         {
//             dfs2(node,transpose,visited);
//             cout<<endl;
//         }
//     }
//     return 0;
// }

//17.tarjan algo
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int timer=0;
// void dfs(int node, vector<int> adj[], vector<int> &disc, vector<int> &low, vector<bool> &inStack, stack<int> &st)
// {
//     disc[node]=low[node]=timer++;
//     st.push(node);
//     inStack[node]=true;
//     for(int neighbour:adj[node])
//     {
//         if(disc[neighbour]==-1)
//         {
//             dfs(neighbour,adj,disc,low,inStack,st);
//             low[node]=min(low[node],low[neighbour]);
//         }
//         else if(inStack[neighbour])
//         {
//             low[node]=min(low[node],disc[neighbour]);
//         }
//     }
//     if(disc[node]==low[node])
//     {
//         while(true)
//         {
//             int x=st.top();
//             st.pop();
//             inStack[x]=false;
//             cout<<x<<" ";
//             if(x==node)
//                 break;
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n=5;
//     vector<int> adj[5];
//     int edges[][2]={
//         {1,0},
//         {0,2},
//         {2,1},
//         {0,3},
//         {3,4}
//     };
//     int m=5;
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//     }
//     vector<int> disc(n,-1);
//     vector<int> low(n,-1);
//     vector<bool> inStack(n,false);
//     stack<int> st;
//     for(int i=0;i<n;i++)
//     {
//         if(disc[i]==-1)
//             dfs(i,adj,disc,low,inStack,st);
//     }
//     return 0;
// }

//18.kruskal algo
//  #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+6;
// vector<int> parent(N);
// vector<int> sz(N);
// void makeset(int v){
//     parent[v]=v;
//     sz[v]=1;
// }
// int findset(int v){
//     if(v==parent[v]) return v;
//     return parent[v]=findset(parent[v]);
// }
// void unionset(int a,int b){
//     a=findset(a);
//     b=findset(b);
//     if(a!=b){
//         if(sz[a]<sz[b]){
//             swap(a,b);
//         }
//         parent[b]=a;
//         sz[a]+=sz[b];
//     }
// }
// int main(){
//       for(int i=0;i<N;i++){
//         makeset(i);
//       }
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> adj;
//     for(int i=0;i<m;i++){
//         int u,v,w;
//         cin>>u>>v>>w;
//         adj.push_back({w,u,v});
//     }
//     sort(adj.begin(),adj.end());
//     int cost=0;
//     for(auto i:adj){
//         int w=i[0];
//         int u=i[1];
//         int v=i[2];
//         int x=findset(u);
//         int y=findset(v);
//         if(x==y){continue ;}
//         else{
//             cout<<u<<" "<<v<<endl;
//             cost+=w;
//             unionset(u,v);}
//     }
//    cout<<cost;
//    return 0;
// }

//19. prims algo
// #include<bits/stdc++.h>
// using namespace std;
// int n,m;
// const int N=1e5+3;
// vector<vector<int>> adj[N];
// int cost=0;
// const int INf=1e9;
// vector<int> dist(N),parent(N);
// vector<bool> vis(N);
// void primsmst(int src){
//     for(int i=0;i<n;i++){
//         dist[i] = INf;
//     }
//     set<vector<int>> s;
//     dist[src]=0;
//     s.insert({0,src});
//     while(!s.empty()){
//         auto x=*(s.begin());
//         s.erase(x);
//         vis[x[1]]=true;
//         int u=x[1];
//         int v=parent[x[1]];
//         int w=x[0];
//         cout<<u<<" "<<v<<" "<<w<<endl;
//         cost+=w;
//         for(auto it:adj[x[1]]){
//             if(vis[it[0]]) continue;
//             if(dist[it[0]]>it[1]){
//                 s.erase({dist[it[0]],it[0]});
//                 dist[it[0]]=it[1];
//                 s.insert({dist[it[0]],it[0]});
//                 parent[it[0]]=x[1];
//             }
//         }
//     }
// }
// int main(){
//     cin>>n>>m;
//     for(int i=0;i<m;i++){
//         int u,v,w;
//         cin>>u>>v>>w;
//         adj[u].push_back({v,w});
//         adj[v].push_back({u,w});
//     }
//     primsmst(0);
//     cout<<cost;
//     return 0;
// }

//20.dijkstra algo
// #include<bits/stdc++.h>
// using namespace std;
// int n,m;
// const int INf=1e7;
// int main(){
//     cin>>n>>m;
//     vector<int> dist(n+1,INf);
//     vector<vector<pair<int,int>>> graph(n+1);
//     for(int i=0;i<m;i++){
//         int u,v,w;
//         cin>>u>>v>>w;
//         graph[u].push_back({v,w});
//         graph[v].push_back({u,w});
//     }
//     int src;
//     cin>>src;
//     dist[src]=0;
//     set<pair<int,int>> s;
//      s.insert({0,src});
//      while(!s.empty()){
//         auto x=*(s.begin());
//         s.erase(x);
//         for(auto it:graph[x.second]){
//             if(dist[it.first]>dist[x.second]+it.second){
//                 s.erase({dist[it.first],it.first});
//                 dist[it.first]=dist[x.second]+it.second;
//                 s.insert({dist[it.first],it.first});
//             }
//         }
//     }
//     for(int i=1;i<n;i++){
//         if(dist[i]<INf){
//             cout<<dist[i]<<" ";
//         }
//         else cout<<-1<<" ";
//     }
//     return 0;
// }

//21.bellman ford algo
// #include<bits/stdc++.h>
// using namespace std;
// const int INf=1e9;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> graph;
//     for(int i=0;i<m;i++){
//         int u,v,w;
//         cin>>u>>v>>w;
//         graph.push_back({u,v,w});
//     }
//      int src;
//     cin>>src;
//     vector<int> dist(n,INf);
//     dist[src]=0;
//     for(int iter=0;iter<n-1;iter++){
//         for(auto it:graph){
//             int u=it[0];
//             int v=it[1];
//             int w=it[2];
//             dist[v]=min(dist[v],w+dist[u]);
//             }
//         }
//     for(auto i:dist){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//22. flyod warshell algo
// #include<bits/stdc++.h>
// using namespace std;
// const int INf=1e9;
// int main(){
//     vector<vector<int>> graph={{0,5,INf,10},{INf,0,3,INf},{INf,INf,0,1},{INf,INf,INf,0}};
//     int n=graph.size();
//     vector<vector<int>> dist=graph;
//     for(int k=0;k<n;k++){
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(dist[i][k]+dist[k][j]<dist[i][j]){
//                     dist[i][j]=dist[i][k]+dist[k][j];
//                 }
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(dist[i][j]==INf) cout<<"INf"<<" ";
//             else cout<<dist[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//23.bridge in a graph
// #include<iostream>
// #include<vector>
// using namespace std;
// int timer=0;
// void dfs(int node,int parent,vector<int> adj[],vector<int> &disc,vector<int> &low,vector<bool> &visited)
// {
//     visited[node]=true;
//     disc[node]=low[node]=timer++;
//     for(int neighbour:adj[node])
//     {
//         if(neighbour==parent)
//             continue;
//         if(!visited[neighbour])
//         {
//             dfs(neighbour,node,adj,disc,low,visited);
//             low[node]=min(low[node],low[neighbour]);
//             if(low[neighbour]>disc[node])
//                 cout<<node<<" "<<neighbour<<endl;
//         }
//         else
//         {
//             low[node]=min(low[node],disc[neighbour]);
//         }
//     }
// }
// int main()
// {
//     int n=5;
//     vector<int> adj[5];
//     int edges[][2]={
//         {0,1},
//         {1,2},
//         {2,0},
//         {1,3},
//         {3,4}
//     };
//     int m=5;
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<int> disc(n,-1);
//     vector<int> low(n,-1);
//     vector<bool> visited(n,false);
//     for(int i=0;i<n;i++)
//     {
//         if(!visited[i])
//             dfs(i,-1,adj,disc,low,visited);
//     }
//     return 0;
// }

//24.articulation point
// #include<iostream>
// #include<vector>
// using namespace std;
// int timer=0;
// void dfs(int node,int parent,vector<int> adj[],vector<int> &disc,vector<int> &low,vector<bool> &visited,vector<bool> &ap)
// {
//     visited[node]=true;
//     disc[node]=low[node]=timer++;
//     int child=0;
//     for(int neighbour:adj[node])
//     {
//         if(neighbour==parent)
//             continue;
//         if(!visited[neighbour])
//         {
//             child++;
//             dfs(neighbour,node,adj,disc,low,visited,ap);
//             low[node]=min(low[node],low[neighbour]);
//             if(parent!=-1 && low[neighbour]>=disc[node])
//                 ap[node]=true;
//         }
//         else
//         {
//             low[node]=min(low[node],disc[neighbour]);
//         }
//     }
//     if(parent==-1 && child>1)
//         ap[node]=true;
// }
// int main()
// {
//     int n=5;
//     vector<int> adj[5];
//     int edges[][2]={
//         {0,1},
//         {1,2},
//         {2,0},
//         {1,3},
//         {3,4}
//     };
//     int m=5;
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<int> disc(n,-1);
//     vector<int> low(n,-1);
//     vector<bool> visited(n,false);
//     vector<bool> ap(n,false);
//     for(int i=0;i<n;i++)
//     {
//         if(!visited[i])
//             dfs(i,-1,adj,disc,low,visited,ap);
//     }
//     cout<<"Articulation Points:"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         if(ap[i])
//             cout<<i<<" ";
//     }
//     return 0;
// }

//25.hamiltonian cycle
// #include<iostream>
// #include<vector>
// using namespace std;
// bool solve(int node,int start,vector<int> adj[],vector<bool> &visited,int count,int n)
// {
//     if(count==n)
//     {
//         for(int neighbour:adj[node])
//         {
//             if(neighbour==start)
//                 return true;
//         }
//         return false;
//     }
//     for(int neighbour:adj[node])
//     {
//         if(!visited[neighbour])
//         {
//             visited[neighbour]=true;
//             if(solve(neighbour,start,adj,visited,count+1,n))
//                 return true;
//             visited[neighbour]=false;
//         }
//     }
//     return false;
// }
// int main()
// {
//     int n=4;
//     vector<int> adj[4];
//     int edges[][2]={
//         {0,1},
//         {1,2},
//         {2,3},
//         {3,0}
//     };
//     int m=4;
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<bool> visited(n,false);
//     visited[0]=true;
//     if(solve(0,0,adj,visited,1,n))
//         cout<<"Hamiltonian Cycle Exists";
//     else
//         cout<<"Hamiltonian Cycle Does Not Exist";
//     return 0;
// }

//26.hamiltonian path
// #include<iostream>
// #include<vector>
// using namespace std;
// bool solve(int node,vector<int> adj[],vector<bool> &visited,int count,int n)
// {
//     if(count==n)
//         return true;
//     for(int neighbour:adj[node])
//     {
//         if(!visited[neighbour])
//         {
//             visited[neighbour]=true;
//             if(solve(neighbour,adj,visited,count+1,n))
//                 return true;
//             visited[neighbour]=false;
//         }
//     }
//     return false;
// }
// int main()
// {
//     int n=4;
//     vector<int> adj[4];
//     int edges[][2]={
//         {0,1},
//         {1,2},
//         {2,3},
//         {0,3}
//     };
//     int m=4;
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     bool found=false;
//     for(int i=0;i<n;i++)
//     {
//         vector<bool> visited(n,false);
//         visited[i]=true;
//         if(solve(i,adj,visited,1,n))
//         {
//             found=true;
//             break;
//         }
//     }
//     if(found)
//         cout<<"Hamiltonian Path Exists";
//     else
//         cout<<"Hamiltonian Path Does Not Exist";
//     return 0;
// }

//27.shortest path in directed acylci 
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// void topoSort(int node, vector<pair<int,int>> adj[], vector<bool> &visited, stack<int> &st)
// {
//     visited[node]=true;
//     for(auto neighbour:adj[node])
//     {
//         if(!visited[neighbour.first])
//             topoSort(neighbour.first,adj,visited,st);
//     }
//     st.push(node);
// }
// int main()
// {
//     int n=6;
//     vector<pair<int,int>> adj[6];
//     vector<vector<int>> edges={
//         {0,1,2},
//         {0,4,1},
//         {1,2,3},
//         {4,2,2},
//         {4,5,4},
//         {2,3,6},
//         {5,3,1}
//     };
//     for(auto edge:edges)
//     {
//         int u=edge[0];
//         int v=edge[1];
//         int wt=edge[2];
//         adj[u].push_back({v,wt});
//     }
//     vector<bool> visited(n,false);
//     stack<int> st;
//     for(int i=0;i<n;i++)
//     {
//         if(!visited[i])
//             topoSort(i,adj,visited,st);
//     }
//     vector<int> dist(n,1e9);
//     dist[0]=0;
//     while(!st.empty())
//     {
//         int node=st.top();
//         st.pop();
//         if(dist[node]!=1e9)
//         {
//             for(auto neighbour:adj[node])
//             {
//                 int v=neighbour.first;
//                 int wt=neighbour.second;
//                 if(dist[node]+wt<dist[v])
//                     dist[v]=dist[node]+wt;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//         cout<<dist[i]<<" ";
//     return 0;
// }

//28.shortest path in undirected graph bfs
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// int main()
// {
//     int n=6;
//     vector<int> adj[6];
//     int edges[][2]={
//         {0,1},
//         {0,3},
//         {1,2},
//         {3,4},
//         {4,5},
//         {2,5}
//     };
//     int m=6;
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     int src=0;
//     vector<int> dist(n,-1);
//     queue<int> q;
//     q.push(src);
//     dist[src]=0;
//     while(!q.empty())
//     {
//         int node=q.front();
//         q.pop();
//         for(int neighbour:adj[node])
//         {
//             if(dist[neighbour]==-1)
//             {
//                 dist[neighbour]=dist[node]+1;
//                 q.push(neighbour);
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//         cout<<dist[i]<<" ";
//     return 0;
// }

//29.shortest path using dfs
// #include<iostream>
// #include<vector>
// using namespace std;
// bool dfs(int node,int parent,int dest,vector<int> adj[],int &ans,int dist)
// {
//     if(node==dest)
//     {
//         ans=dist;
//         return true;
//     }
//     for(int neighbour:adj[node])
//     {
//         if(neighbour!=parent)
//         {
//             if(dfs(neighbour,node,dest,adj,ans,dist+1))
//                 return true;
//         }
//     }
//     return false;
// }
// int main()
// {
//     int n=6;
//     vector<int> adj[6];
//     int edges[][2]={
//         {0,1},
//         {0,2},
//         {1,3},
//         {1,4},
//         {2,5}
//     };
//     int m=5;
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     int src=0;
//     int dest=4;
//     int ans=-1;
//     dfs(src,-1,dest,adj,ans,0);
//     cout<<"Shortest Distance = "<<ans;
//     return 0;
// }

//30.shortest path in weighted undirected graph
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// int main()
// {
//     int n=5;
//     vector<pair<int,int>> adj[5];
//     vector<vector<int>> edges={
//         {0,1,2},
//         {0,3,6},
//         {1,2,3},
//         {1,3,8},
//         {1,4,5},
//         {2,4,7},
//         {3,4,9}
//     };
//     for(auto edge:edges)
//     {
//         int u=edge[0];
//         int v=edge[1];
//         int wt=edge[2];
//         adj[u].push_back({v,wt});
//         adj[v].push_back({u,wt});
//     }
//     int src=0;
//     vector<int> dist(n,1e9);
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//     dist[src]=0;
//     pq.push({0,src});
//     while(!pq.empty())
//     {
//         int d=pq.top().first;
//         int node=pq.top().second;
//         pq.pop();
//         if(d>dist[node])
//             continue;
//         for(auto neighbour:adj[node])
//         {
//             int v=neighbour.first;
//             int wt=neighbour.second;
//             if(dist[node]+wt<dist[v])
//             {
//                 dist[v]=dist[node]+wt;
//                 pq.push({dist[v],v});
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//         cout<<dist[i]<<" ";
//     return 0;
// }

//31.circle of string
// #include<iostream>
// #include<vector>
// using namespace std;
// void dfs(int node,vector<int> adj[],vector<bool> &visited)
// {
//     visited[node]=true;
//     for(int neighbour:adj[node])
//     {
//         if(!visited[neighbour])
//             dfs(neighbour,adj,visited);
//     }
// }
// int main()
// {
//     vector<string> arr={
//         "ab",
//         "bc",
//         "cd",
//         "da"
//     };
//     vector<int> adj[26];
//     vector<int> rev[26];
//     vector<int> indegree(26,0);
//     vector<int> outdegree(26,0);
//     for(string s:arr)
//     {
//         int u=s.front()-'a';
//         int v=s.back()-'a';
//         adj[u].push_back(v);
//         rev[v].push_back(u);
//         outdegree[u]++;
//         indegree[v]++;
//     }
//     for(int i=0;i<26;i++)
//     {
//         if(indegree[i]!=outdegree[i])
//         {
//             cout<<"No";
//             return 0;
//         }
//     }
//     vector<bool> visited(26,false);
//     int start=-1;
//     for(int i=0;i<26;i++)
//     {
//         if(outdegree[i]>0)
//         {
//             start=i;
//             break;
//         }
//     }
//     dfs(start,adj,visited);
//     for(int i=0;i<26;i++)
//     {
//         if(outdegree[i]>0 && !visited[i])
//         {
//             cout<<"No";
//             return 0;
//         }
//     }
//     fill(visited.begin(),visited.end(),false);
//     dfs(start,rev,visited);
//     for(int i=0;i<26;i++)
//     {
//         if(outdegree[i]>0 && !visited[i])
//         {
//             cout<<"No";
//             return 0;
//         }
//     }
//     cout<<"Yes";
//     return 0;
// }

//32.eluer path and circuit 
// #include<iostream>
// #include<vector>
// using namespace std;
// void dfs(int node,vector<int> adj[],vector<bool> &visited)
// {
//     visited[node]=true;
//     for(int neighbour:adj[node])
//     {
//         if(!visited[neighbour])
//             dfs(neighbour,adj,visited);
//     }
// }
// int main()
// {
//     int n=5;
//     vector<int> adj[5];
//     int edges[][2]={
//         {0,1},
//         {1,2},
//         {2,0},
//         {1,3},
//         {3,4}
//     };
//     int m=5;
//     vector<int> degree(n,0);
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//         degree[u]++;
//         degree[v]++;
//     }
//     vector<bool> visited(n,false);
//     int start=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(degree[i]>0)
//         {
//             start=i;
//             break;
//         }
//     }
//     dfs(start,adj,visited);
//     for(int i=0;i<n;i++)
//     {
//         if(degree[i]>0 && !visited[i])
//         {
//             cout<<"Graph is not connected";
//             return 0;
//         }
//     }
//     int odd=0;
//     for(int i=0;i<n;i++)
//     {
//         if(degree[i]%2!=0)
//             odd++;
//     }
//     if(odd==0)
//         cout<<"Euler Circuit Exists";
//     else if(odd==2)
//         cout<<"Euler Path Exists";
//     else
//         cout<<"Neither Euler Path nor Euler Circuit Exists";
//     return 0;
// }

//33.knight walk
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// struct Node
// {
//     int x;
//     int y;
//     int dist;
// };
// int main()
// {
//     int n=8,m=8;
//     pair<int,int> source={0,0};
//     pair<int,int> target={7,7};
//     vector<vector<bool>> visited(n,vector<bool>(m,false));
//     int dx[]={-2,-2,-1,-1,1,1,2,2};
//     int dy[]={-1,1,-2,2,-2,2,-1,1};
//     queue<Node> q;
//     q.push({source.first,source.second,0});
//     visited[source.first][source.second]=true;
//     while(!q.empty())
//     {
//         Node cur=q.front();
//         q.pop();
//         if(cur.x==target.first && cur.y==target.second)
//         {
//             cout<<"Minimum Moves = "<<cur.dist;
//             return 0;
//         }
//         for(int i=0;i<8;i++)
//         {
//             int nx=cur.x+dx[i];
//             int ny=cur.y+dy[i];
//             if(nx>=0 && nx<n && ny>=0 && ny<m && !visited[nx][ny])
//             {
//                 visited[nx][ny]=true;
//                 q.push({nx,ny,cur.dist+1});
//             }
//         }
//     }
//     cout<<"Not Reachable";
//     return 0;
// }

//34.shortest source to dest in binary matrix
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// struct Node
// {
//     int x;
//     int y;
//     int dist;
// };
// int main()
// {
//     vector<vector<int>> grid={
//         {1,1,1,1},
//         {1,0,1,0},
//         {1,1,1,1},
//         {0,1,0,1}
//     };
//     int n=grid.size();
//     int m=grid[0].size();
//     pair<int,int> source={0,0};
//     pair<int,int> dest={3,3};
//     if(grid[source.first][source.second]==0 || grid[dest.first][dest.second]==0)
//     {
//         cout<<"No Path";
//         return 0;
//     }
//     vector<vector<bool>> visited(n,vector<bool>(m,false));
//     int dx[]={-1,1,0,0};
//     int dy[]={0,0,-1,1};
//     queue<Node> q;
//     q.push({source.first,source.second,0});
//     visited[source.first][source.second]=true;
//     while(!q.empty())
//     {
//         Node cur=q.front();
//         q.pop();
//         if(cur.x==dest.first && cur.y==dest.second)
//         {
//             cout<<"Shortest Distance = "<<cur.dist;
//             return 0;
//         }
//         for(int i=0;i<4;i++)
//         {
//             int nx=cur.x+dx[i];
//             int ny=cur.y+dy[i];
//             if(nx>=0 && nx<n && ny>=0 && ny<m &&
//                grid[nx][ny]==1 && !visited[nx][ny])
//             {
//                 visited[nx][ny]=true;
//                 q.push({nx,ny,cur.dist+1});
//             }
//         }
//     }
//     cout<<"No Path";
//     return 0;
// }

//35.find whether path exist 
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// struct Node
// {
//     int x;
//     int y;
// };
// int main()
// {
//     vector<vector<int>> grid={
//         {3,0,3,0},
//         {1,3,0,3},
//         {0,3,3,3},
//         {0,0,2,3}
//     };
//     int n=grid.size();
//     pair<int,int> source,dest;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(grid[i][j]==1)
//                 source={i,j};
//             if(grid[i][j]==2)
//                 dest={i,j};
//         }
//     }
//     vector<vector<bool>> visited(n,vector<bool>(n,false));
//     int dx[]={-1,1,0,0};
//     int dy[]={0,0,-1,1};
//     queue<Node> q;
//     q.push({source.first,source.second});
//     visited[source.first][source.second]=true;
//     while(!q.empty())
//     {
//         Node cur=q.front();
//         q.pop();
//         if(cur.x==dest.first && cur.y==dest.second)
//         {
//             cout<<"Path Exists";
//             return 0;
//         }
//         for(int i=0;i<4;i++)
//         {
//             int nx=cur.x+dx[i];
//             int ny=cur.y+dy[i];
//             if(nx>=0 && nx<n && ny>=0 && ny<n &&
//                !visited[nx][ny] && grid[nx][ny]!=0)
//             {
//                 visited[nx][ny]=true;
//                 q.push({nx,ny});
//             }
//         }
//     }
//     cout<<"Path Does Not Exist";
//     return 0;
// }

//36.covid spred 
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int x,y,t;
// };
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> grid(n,vector<int>(m));
//     queue<Node> q;
//     int healthy=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>grid[i][j];
//             if(grid[i][j]==2)
//                 q.push({i,j,0});
//             else if(grid[i][j]==1)
//                 healthy++;
//         }
//     }
//     int dx[]={-1,1,0,0};
//     int dy[]={0,0,-1,1};
//     int ans=0;
//     while(!q.empty())
//     {
//         Node cur=q.front();
//         q.pop();
//         ans=max(ans,cur.t);
//         for(int k=0;k<4;k++)
//         {
//             int nx=cur.x+dx[k];
//             int ny=cur.y+dy[k];
//             if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==1)
//             {
//                 grid[nx][ny]=2;
//                 healthy--;
//                 q.push({nx,ny,cur.t+1});
//             }
//         }
//     }
//     if(healthy>0)
//         cout<<-1;
//     else
//         cout<<ans;
//     return 0;
// }

//37.find no of island 
// #include<bits/stdc++.h>
// using namespace std;
// void dfs(int i,int j,vector<vector<char>>& grid,int n,int m)
// {
//     grid[i][j]='0';
//     int dx[]={-1,-1,-1,0,0,1,1,1};
//     int dy[]={-1,0,1,-1,1,-1,0,1};
//     for(int k=0;k<8;k++)
//     {
//         int ni=i+dx[k];
//         int nj=j+dy[k];
//         if(ni>=0 && nj>=0 && ni<n && nj<m && grid[ni][nj]=='1')
//             dfs(ni,nj,grid,n,m);
//     }
// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     vector<vector<char>> grid(n,vector<char>(m));
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             cin>>grid[i][j];
//     int cnt=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(grid[i][j]=='1')
//             {
//                 cnt++;
//                 dfs(i,j,grid,n,m);
//             }
//         }
//     }
//     cout<<cnt;
//     return 0;
// }

//38.replace o with x
// #include<bits/stdc++.h>
// using namespace std;
// void dfs(int i,int j,vector<vector<char>>& a,int n,int m)
// {
//     a[i][j]='#';
//     int dx[]={-1,1,0,0};
//     int dy[]={0,0,-1,1};
//     for(int k=0;k<4;k++)
//     {
//         int ni=i+dx[k];
//         int nj=j+dy[k];
//         if(ni>=0 && nj>=0 && ni<n && nj<m && a[ni][nj]=='O')
//             dfs(ni,nj,a,n,m);
//     }
// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     vector<vector<char>> a(n,vector<char>(m));
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             cin>>a[i][j];
//     for(int i=0;i<n;i++)
//     {
//         if(a[i][0]=='O')
//             dfs(i,0,a,n,m);
//         if(a[i][m-1]=='O')
//             dfs(i,m-1,a,n,m);
//     }
//     for(int j=0;j<m;j++)
//     {
//         if(a[0][j]=='O')
//             dfs(0,j,a,n,m);
//         if(a[n-1][j]=='O')
//             dfs(n-1,j,a,n,m);
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(a[i][j]=='O')
//                 a[i][j]='X';
//             else if(a[i][j]=='#')
//                 a[i][j]='O';
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//             cout<<a[i][j]<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

//39.rotten oranges 
// #include<bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int x,y,t;
// };
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> grid(n,vector<int>(m));
//     queue<Node> q;
//     int fresh=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>grid[i][j];
//             if(grid[i][j]==2)
//                 q.push({i,j,0});
//             else if(grid[i][j]==1)
//                 fresh++;
//         }
//     }
//     int dx[]={-1,1,0,0};
//     int dy[]={0,0,-1,1};
//     int ans=0;
//     while(!q.empty())
//     {
//         Node cur=q.front();
//         q.pop();
//         ans=max(ans,cur.t);
//         for(int k=0;k<4;k++)
//         {
//             int nx=cur.x+dx[k];
//             int ny=cur.y+dy[k];
//             if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==1)
//             {
//                 grid[nx][ny]=2;
//                 fresh--;
//                 q.push({nx,ny,cur.t+1});
//             }
//         }
//     }
//     if(fresh>0)
//         cout<<-1;
//     else
//         cout<<ans;
//     return 0;
// }

//40. x total shapes
// #include<bits/stdc++.h>
// using namespace std;
// void dfs(int i,int j,vector<vector<char>>& grid,int n,int m)
// {
//     grid[i][j]='O';
//     int dx[]={-1,1,0,0};
//     int dy[]={0,0,-1,1};
//     for(int k=0;k<4;k++)
//     {
//         int ni=i+dx[k];
//         int nj=j+dy[k];
//         if(ni>=0 && nj>=0 && ni<n && nj<m && grid[ni][nj]=='X')
//             dfs(ni,nj,grid,n,m);
//     }
// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     vector<vector<char>> grid(n,vector<char>(m));
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             cin>>grid[i][j];
//     int cnt=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(grid[i][j]=='X')
//             {
//                 cnt++;
//                 dfs(i,j,grid,n,m);
//             }
//         }
//     }
//     cout<<cnt;
//     return 0;
// }

//41. no of provinces 
// #include<bits/stdc++.h>
// using namespace std;
// void dfs(int node,vector<vector<int>>& adj,vector<int>& vis,int n)
// {
//     vis[node]=1;
//     for(int i=0;i<n;i++)
//     {
//         if(adj[node][i]==1 && !vis[i])
//             dfs(i,adj,vis,n);
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<vector<int>> adj(n,vector<int>(n));
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//             cin>>adj[i][j];
//     vector<int> vis(n,0);
//     int cnt=0;
//     for(int i=0;i<n;i++)
//     {
//         if(!vis[i])
//         {
//             cnt++;
//             dfs(i,adj,vis,n);
//         }
//     }
//     cout<<cnt;
//     return 0;
// }

//42.prerequisite task
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> adj(n);
//     vector<int> indegree(n,0);
//     for(int i=0;i<m;i++)
//     {
//         int u,v;
//         cin>>u>>v;
//         adj[v].push_back(u);
//         indegree[u]++;
//     }
//     queue<int> q;
//     for(int i=0;i<n;i++)
//     {
//         if(indegree[i]==0)
//             q.push(i);
//     }
//     int cnt=0;
//     while(!q.empty())
//     {
//         int node=q.front();
//         q.pop();
//         cnt++;
//         for(auto it:adj[node])
//         {
//             indegree[it]--;
//             if(indegree[it]==0)
//                 q.push(it);
//         }
//     }
//     if(cnt==n)
//         cout<<"Yes";
//     else
//         cout<<"No";
//     return 0;
// }

//43.alien dicitionary 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     vector<string> dict(n);
//     for(int i=0;i<n;i++)
//         cin>>dict[i];
//     vector<vector<int>> adj(k);
//     vector<int> indegree(k,0);
//     for(int i=0;i<n-1;i++)
//     {
//         string s1=dict[i];
//         string s2=dict[i+1];

//         int len=min(s1.size(),s2.size());
//         for(int j=0;j<len;j++)
//         {
//             if(s1[j]!=s2[j])
//             {
//                 adj[s1[j]-'a'].push_back(s2[j]-'a');
//                 indegree[s2[j]-'a']++;
//                 break;
//             }
//         }
//     }
//     queue<int> q;
//     for(int i=0;i<k;i++)
//     {
//         if(indegree[i]==0)
//             q.push(i);
//     }
//     string ans="";
//     while(!q.empty())
//     {
//         int node=q.front();
//         q.pop();
//         ans+=char(node+'a');
//         for(auto it:adj[node])
//         {
//             indegree[it]--;
//             if(indegree[it]==0)
//                 q.push(it);
//         }
//     }
//     cout<<ans;
//     return 0;
// }

