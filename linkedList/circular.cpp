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
    ~Node(){
        if(this->Next != NULL){
            delete Next;
            this->Next =NULL;
        }
    }


};
void printList(Node* tail){
    Node *temp = tail;    
    cout<<tail->data<<endl;
    while(tail->Next != temp){
        cout<<temp->data;
        temp = temp->Next;
        cout<<endl;
    }
    cout<<endl;

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


void insertNode(Node* &tail, int element , int value){
     // place the node after the element
     if(tail==NULL){
        Node *temp = new Node(value);
        tail = temp;
        temp->Next = temp;
     }
     else{
        // no empty list
        Node* curr = tail;
        while(curr->data!=element){
            curr= curr->Next;
        }
        Node* temp = new Node(value);
        temp->Next = curr->Next;
        curr->Next =temp;

     }
}
int main(){
    // creating a node
    Node *tail = NULL;
    insertNode(tail, 5, 3);





    printList(tail);
    



}