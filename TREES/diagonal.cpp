vector<int> diagonal(Node *root)
{
   // your code here
   vector<int> ans;
    if(root == NULL) return ans;

    queue<Node*> q;

    q.push(root);

    // Give priority to left part first
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        while(temp != NULL){
            ans.push_back(temp->data);

            if(temp->left != NULL){
                q.push(temp->left);
            }

            temp = temp->right;
        }
    }

    return ans;
}
