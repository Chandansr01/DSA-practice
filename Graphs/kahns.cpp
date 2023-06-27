#include <bits/stdc++.h> 
#include <unordered_map>
#include<list>
#include<stack>


void topoSort(int node, vector<bool> &visited,stack<int> &stk,unordered_map<int, list<int>> 
&adj){
     visited[node]=1;
     for(auto neighbour: adj[node]){
         if(!visited[neighbour]){
             topoSort(neighbour,visited,stk,adj);
         }

     }
        stk.push(node);
}



vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int x = edges[i][0];
        int y = edges[i][1];
        adj[x].push_back(y);
    }

    vector<bool> visited(v);
    vector<int> indegree(v);
    stack<int> stk;
    queue<int> q;
    // for(int i=0; i<edges.size();i++){
    //     int node = edges[i][1];
    //     indegree[node]++;
    // }

    for(auto i: adj){
        for(auto j:i.second){
            indegree[j]++;
        }
    }
    for(int i=0; i<v; i++){
        if(indegree[i] == 0)
            q.push(i);
    }
    
    // for(int i=0; i<v; i++){
    //     if(!visited[i]){
    //         topoSort(i, visited, stk, adj);
    //     }
    // }


    vector<int> ans;
    // while(!stk.empty()){
    //     ans.push_back(stk.top());
    //     stk.pop();
    // }
     while(!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);

        for(auto neighbour: adj[front]){
            indegree[neighbour]--;
            if(indegree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
    return ans;
}