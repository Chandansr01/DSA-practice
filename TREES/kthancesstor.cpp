bool solve(Node* root, int node, vector<int> &ans){
     if(root==NULL){
         return false;
     }
     ans.push_back(root->data);
     if(root->data == node){
    //  ans.push_back(root->data);
         return true;
     }
     if(solve(root->left, node, ans)||
     solve(root->right, node, ans)){
         return true;
     }
     ans.pop_back();
     return false;
 }
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    vector<int> ans;
    bool res = solve(root, node, ans);
    // for(auto i: ans){
    //     cout<<i<<" ";
    // }
    int size = ans.size();
    if((size-k-1)<0){
        return -1;
    }
    else{
        
    return ans[size-k-1];
    }
}
