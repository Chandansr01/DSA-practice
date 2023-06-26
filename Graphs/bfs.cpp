#include <bits/stdc++.h> 
#include<unordered_map>
#include<list>
#include<set>
void prepareAdjList(unordered_map<int, set<int>> &adjList, vector<pair<int, int>> edges){
        for(int i=0; i<edges.size(); i++){
            int x = edges[i].first;
            int y = edges[i].second;
            adjList[x].insert(y);
            adjList[y].insert(x);
        }
}

void bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node){
    queue<int> q;
    q.push(node);
    visited[node]=true;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);

        for(auto i: adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    unordered_map<int, set<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;


    prepareAdjList(adjList, edges);

    for(int i=0; i<vertex; i++){
        if(!visited[i]){
            bfs(adjList, visited, ans, i);
        }
    }
    return ans;

}