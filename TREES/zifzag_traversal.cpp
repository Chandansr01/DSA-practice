#include<iostream>
using namespace std;
#include<queue>

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int n){
        this->data = n;
        this->left = NULL;
        this->right = NULL;

    }
};


node* buildTree(node* root){
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"enter thr data for left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"enter thr data for right of "<<data<<endl;
    root->right = buildTree(root->right);
    
    return root;
}

void levelOrder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}

vector <int> zigZagTraversal(node* root)
    {
    	queue<node*> q;
    	vector<int> v;
    	q.push(root);
    	q.push(NULL);
    	bool ltr = false;
    	while(!q.empty()){
    	    node* temp = q.front();
    	    if(temp!=NULL){
    	        v.push_back(temp->data);
                cout<<"pushing: "<<temp->data<<endl;
    	    }
    	    q.pop();
    	    if(temp==NULL){
    	        q.push(NULL);
    	        if(ltr==true){
    	            ltr=false;
    	        }
    	        else if(ltr==false){
    	            ltr=true;
    	        }
    	    }
            else{
                if(ltr==true){
                    if(temp->left){
                        q.push(temp->left);
                    }
                    if(temp->right){
                        q.push(temp->right);
                    }
                }
                else if(ltr==false){
                    if(temp->right){
                        q.push(temp->right);
                    }
                    if(temp->left){
                        q.push(temp->left);
                    }
                }
            }
    	}
    	return v;
    }

int main(){

    node* root = NULL;
    root = buildTree(root);
    // levelOrder(root);
    vector<int> ans = zigZagTraversal(root);
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0; 
}

// 7 9 8 10 -1 -1 9 -1 -1 8 -1 -1 7 6 -1 -1 -1