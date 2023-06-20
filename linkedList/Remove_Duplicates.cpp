#include<iostream>
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
int main(){
    Node *head = new Node(10);
    insertNode(head,10);
    insertNode(head,30);
    insertNode(head,40);
    insertNode(head,50);
    insertNode(head,50);
    print(head);
    removeDuplicates(head);
    print(head);



}