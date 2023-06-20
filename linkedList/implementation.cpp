#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *Next;

    // defining a node
    Node(int data){
        this->data = data;
        this->Next = NULL;
    }
    // Node(){

    //     this->Next = NULL;
    // }
    ~Node(){
        if(this->Next != NULL){
            delete Next;
            this->Next =NULL;
        }
    }


};
void printList(Node* &head){
    Node *temp = head;    
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->Next;
        cout<<endl;
    }
    cout<<endl;

}

void InsertAtTail(Node* &head, int d){
    Node *temp = new Node(d);
    Node *temp1 = head;
    while(temp1->Next!=NULL){
        temp1 = temp1->Next;
    }
    temp1->Next = temp;
}

void insertAtHead(Node* &head, int d){
        Node *temp = new Node(d);
        temp->Next = head;
        head = temp;
}

void insertInMiddle(Node* &head, int d, int pos){
    Node *temp = new Node(d);
    Node *temp1 = head;
    for(int i=1; i<pos-1; i++){
        if(temp1->Next==NULL)
            break;
        else
            temp1= temp1->Next;
    }
    // cout<<temp1->data<<"aaaa"<<endl;
    temp->Next = temp1->Next;
    temp1->Next = temp;
}


void deletion(Node* &head, int pos){
    if(pos==1){
        Node* temp = head;
        head = head->Next;
        temp->Next=NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt<pos){
            prev = curr;
            curr = curr->Next;
            curr++;
        }
        prev->Next =curr->Next;
        curr->Next=NULL;
        delete curr;

    }
}
int main(){
    // creating a node
    Node *node1 = new Node(10);
    Node *head = node1;

    insertAtHead(head, 12);
    insertAtHead(head, 15);
    InsertAtTail(head, 20);
    InsertAtTail(head, 30);
    insertInMiddle(head,100,2);
    deletion(head, 1);
    printList(head);



}