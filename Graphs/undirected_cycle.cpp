#include<unordered_map>
#include<list>
#include<queue>
bool isCyclicDFS(int node , int parent,unordered_map<int,bool> &visited, unordered_map<int, list<int>> &adj){
    visited[node]=true;

    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            bool cycleDetected = isCyclicDFS(neighbour,node,visited,adj);
            if(cycleDetected)
                return true;
        }
        else if(neighbour!=parent){
            return true;
        }
    }
    return false;
}
bool isCyclicBFS(int src, unordered_map<int,bool> &visited,unordered_map<int, list<int>> &adj){
    unordered_map<int,int> parent;

    parent[src] =-1;
    visited[src]=1;
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        for(auto neighbour: adj[frontNode]){
            if(visited[neighbour]==true && neighbour!=parent[frontNode]){
                return true;
            }
            else if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] =1;
                parent[neighbour] =frontNode;
            }
        }
    }
    return false; 
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{   unordered_map<int, list<int>> adj;
    unordered_map<int,bool> visited;
    // Write your code here.
    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);    
    }

    for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans = isCyclicBFS(i, visited, adj);
            // bool ans = isCyclicDFS(i,-1, visited, adj);

            if(ans==1){
                return "Yes";
            }
        }
        
    }
    return "No";
}
