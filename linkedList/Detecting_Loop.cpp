#include<iostream>
#include<map>
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

void insertAtPosition(Node* head, int element, int value){
    Node* temp = head;
    while(temp!=NULL && temp->data!=element){
        temp=temp->next;
    }
    Node* temp1 = new Node(value);
    temp1->next = head;
    // cout<<" node points ar ->"<< temp1->next->data<<endl;
    temp->next = temp1;
}


void print(Node *head){
    Node *temp = head;
    while(temp!=NULL && temp->next!=head){
        cout<<temp->data<<endl;
        temp =temp->next;
    }
    cout<<temp->data<<endl;
}

bool detectCycle(Node* head){
    if(head==NULL){

        return false;
    }
    map<Node *, bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp]==true){
             return true;

        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

bool floydLoop(Node* head, Node * &cycle){
    Node* slow= head;
    Node* fast = head;
    if(head==NULL)
        return false;
    while(slow!=NULL & fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        if(slow==fast){
            // cout<<"cycle is present at"<<slow->data<<endl;
            cycle = slow;
            return true ;
        }
    }
    return false;

}

Node* cycleStart(Node* head, Node* cycle){
    if(head==NULL)
        return NULL;
    while(head!=cycle){
        head=head->next;
        cycle=cycle->next;
    }
    return head;
}

void removeCycle(Node* head, Node* &cycleS){
    if(head==NULL)
        return;
    Node* temp = head;
    while(temp->next!= cycleS){
        temp=temp->next;
    }
    temp->next = NULL;
}

int main(){
    Node *prev = NULL;
    Node *head = new Node(10);
    Node *cycle = NULL;
    Node* curr = head;
    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);
    insertNode(head, 50);
    insertAtPosition(head,50,60);
    cout<<floydLoop(head,cycle)<<endl;
    // cout<<head->data<<" "<<cycle->data<<endl;
    Node * cycleS = cycleStart(head,cycle);
    cout<<"cycle starts at "<<cycleS->data<<endl;
    print(head);
    cout<<endl;

}