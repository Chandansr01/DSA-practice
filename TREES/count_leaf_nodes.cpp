#include<iostream>
#include<queue>
using namespace std;

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
    cout<<"enter :"<<endl;
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


void countLeaf(node* root){
    queue<node*> q;
    int count=0;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(!temp->right && !temp->left){
            count+=1;

        }
        if(temp->left){
        q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    cout<<"Total leaf nodes are :"<< count<<endl;
}


// Inorder traversal
int main(){

    node* root = NULL;
    root = buildTree(root);
    countLeaf(root);
    
    return 0;
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1