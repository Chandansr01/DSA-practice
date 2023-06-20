#include<iostream>
using namespace std;



class Node{
    public:
    int data;
    Node *Next;
    Node *Prev;
    // defining a node
    Node(int data){
        this->data = data;
        this->Next = NULL;
        this->Prev = NULL;
    }
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
    temp->Prev = temp1;
}

void insertAtHead(Node* &head, int d){
        Node *temp = new Node(d);
        temp->Next = head;
        head->Prev = temp;
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
    temp1->Next->Prev = temp;
    temp1->Next = temp;
    temp->Prev =temp1;
}


void deletion(Node* &head, int pos){
    if(pos==1){
        Node* temp = head;
        temp->Next->Prev = NULL;
        head = temp->Next;
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
            cnt++;
        }
        curr->Prev=NULL;
        prev->Next=curr->Next;
        curr->Next = NULL;
        delete curr;

    }
}

int getLength(Node * &head){
    Node *temp = head;
    int count=0;    
    while(temp!=NULL){
        count++;
        temp = temp->Next;
    }
    return count;
}
int main(){
    // creating a node
    Node *node1 = new Node(10);
    Node *head = node1;

    insertAtHead(head, 20);
    InsertAtTail(head, 30);
    insertInMiddle(head, 40, 2);
    deletion(head,3);




    printList(head);
    cout<<" length of the list is : "<<getLength(head)<<endl;



}