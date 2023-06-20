#include<iostream>
#include<map>
using namespace std;


class Node{
    public:
    Node *next;
    int data;

    Node(int d){
        this->next=NULL;
        this->data = d;
    }

     ~Node(){
        if(this->next != NULL){
            delete next;
            this->next =NULL;
        }
    }
};


void insertNode(Node* head, int d){
    Node *temp = new Node(d);
    Node *temp1 = head;
    while(temp1->next!=NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp;
    
}


void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}

void removeDuplicates(Node * head){
    if(head==NULL){
        cout<<"reached end"<<endl;
        return;
    }
    Node *temp = head;
    if((temp->next!=NULL) && temp->data==temp->next->data){
        // cout<<temp->data<<"="<<temp->next->data<<endl;
        Node * hold = temp->next;
        temp->next = temp->next->next;
        // cout<<" next pointer is :"<<temp->next;
        // cout<<temp->next->data<<endl;
        hold->next= NULL;
    }
    removeDuplicates(temp->next);
}

//approach 1 for unsorted
void removeDuplicate(Node *head){
    if(head==NULL)
        return;
    Node * temp = head;
    Node * prev = head;
    Node * curr = head->next;
    while(curr!=NULL){
        if(curr->data == temp->data){
            prev->next = curr->next;
            curr->next = NULL;
        }
        curr = curr->next;
        prev = prev->next;
    }
    removeDuplicate(head->next);    
    
}

// approach 2 for unsorted
void remdupli(Node * curr, Node *prev, map<int,bool> visited){
    if(curr==NULL)
        return;
    if(visited[curr->data]==true){
        cout<<"visited "<<curr->data<<endl;
        prev->next = curr->next;
        curr = prev->next;
        curr->next = NULL;
    }
    if(visited[curr->data]==false){
        cout<<"not visited "<<curr->data<<endl;
        visited[curr->data]=true;
        prev = curr;
    }
    remdupli(curr->next, prev, visited);
}
int main(){
    Node *head = new Node(10);
    Node* prev = NULL;
    map<int, bool> visited;
    insertNode(head,20);
    insertNode(head,20);
    insertNode(head,10);
    insertNode(head,30);
    insertNode(head,10);
    print(head);
    // removeDuplicate(head);
    remdupli(head,prev,visited);
    print(head);



}