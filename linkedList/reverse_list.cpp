#include<iostream>
using namespace std;

class Node{
    public:
    Node *next;
    int data;

    Node(int d){
        this->next =NULL;
        this->data = d;
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

void inserttail(Node* &head, int d){
    Node *temp = new Node(d);
    Node *temp1 = head;
    while(temp1->next!=NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp;
    temp->next = head;
    
}

void print(Node *head){
    Node *temp = head;
    while(temp!=NULL && temp->next!=head){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<temp->data<<" "<<endl;
}

void reverse(Node* prev, Node* &head){
    Node* curr = head;
    Node* fwd = NULL;
    while(curr!=NULL){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    head = prev;
}

void reverseRecursive(Node* &head, Node* curr, Node* prev){
    if(curr==NULL){
        head = prev;
        return;
    }
    Node* fwd = curr->next;

    curr->next = prev;
    reverseRecursive(head,fwd,curr);
}

Node* reversek(Node *head, int k){
    if(head == NULL)
        return NULL;
    else if(head->next == NULL)
        return head;
    Node* curr = head;
    Node* prev = NULL;
    Node* fwd = NULL;
    int count=0;
    while(curr!=NULL && count<k){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
        count++;
    }

    if(fwd!= NULL){
        head->next=reversek(fwd,k);
    }
    return prev;

}

bool checkCircular(Node* &head, Node* temp){
    // Node* temp = head->next;
    if(temp==NULL)
        return false;
    if(temp==head){
        // cout<<" next node is head "<<temp->data<<" "<<head->data;
        return true;
    }
    return checkCircular(head, temp->next);
}

int main(){
    Node *prev = NULL;
    Node *head = new Node(10);
    Node* curr = head;

    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);
    insertNode(head, 50);
    inserttail(head, 90);


    // reverse(prev, head);
    // reverseRecursive(head,curr,prev);
    // cout<<head->data;
    // cout<<head->next;
    // head = reversek(head,2);
    cout<<checkCircular(head,head->next);
    print(head);

    
}