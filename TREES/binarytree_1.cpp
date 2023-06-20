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


// Inorder traversal


void InOrder(node* temp){
    if(temp == NULL){
        return;
    }

    InOrder(temp->left);
    cout<<temp->data;
    InOrder(temp->right);
}

void PreOrder(node* temp){
    if(temp == NULL){
        return;
    }

    cout<<temp->data;
    PreOrder(temp->left);
    PreOrder(temp->right);
}


void PostOrder(node* temp){
    if(temp == NULL){
        return;
    }

    PostOrder(temp->left);
    PostOrder(temp->right);
    cout<<temp->data;
}
int main(){

    node* root = NULL;
    root = buildTree(root);
    levelOrder(root);
    InOrder(root);
    cout<<endl;
    PreOrder(root);
    cout<<endl;
    PostOrder(root);
    return 0;
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1