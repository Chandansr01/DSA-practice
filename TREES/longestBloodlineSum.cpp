if(root==NULL){
            return 0;
        }
        pair<int,int> ans = make_pair(0, 0);  // sum , level
        queue<pair<Node *,pair<int,int>>> q;
        q.push(make_pair(root, make_pair(root->data,1)));
        
        while(!q.empty()){
            pair<Node *,pair<int,int>> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int lvl = temp.second.second;
            int sum = temp.second.first;
            if(frontNode->left==NULL && frontNode->right== NULL){
                if(lvl > ans.second){
                ans.first = sum; 
                ans.second = lvl;
                    
                }
                if(lvl == ans.second){
                    ans.first = max(sum, ans.first);
                }
                
            }
                
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left, make_pair(sum+frontNode->left->data, lvl+1)));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right, make_pair(sum+frontNode->right->data, lvl+1)));
            }
    }
        return ans.first;
        }