void dfs(int Node,unordered_map<int, bool> &visited,unordered_map<int, set<int>> &adjList, vector<int> 
&component){
      component.push_back(Node);
      visited[Node]=true;

      for(auto i : adjList[Node]){
          if(!visited[i]){
              dfs(i, visited,adjList,component);
          }
      }
}



vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int, set<int>> adjList;
    for(int i=0; i<edges.size();i++){
        int x = edges[i][0];
        int y = edges[i][1];
        adjList[x].insert(y);
        adjList[y].insert(x);
    }

    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
    for(int i=0; i<V; i++){
        if(!visited[i]){
            vector<int> component;
            dfs(i,visited,adjList, component); 
            ans.push_back(component);
        }
    }
    return ans;

      
}