#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(int value , Node* &head , Node* &tail){
    // emtpy case
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail  = newNode;  
    }else{
        // if not empty
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev  = newNode;
        head = newNode;
    }
}

void insertAtTail(int value , Node* &head , Node* &tail){
    // empty 
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }else{
        // not empty 
        Node* newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int len(Node* head){
    int count =0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}


void insertAtAny(int value ,int position, Node* &head , Node* &tail){
    // if empty;
    if(head == NULL){
    Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        return;
    }
    if(position ==1){
        insertAtHead(value , head , tail);
        return;
    }
    if(position == len(head)+1){
        insertAtTail(value , head , tail);
        return;
    }else{
        // this means we are inserting at middle
        
        Node* prev = head;
        for(int i=0; i<position-2;i++){
            prev = prev->next;
        }
        Node* newNode = new Node(value);
        Node* next = prev->next;

        //logic
        prev->next = newNode;
        next->prev = newNode;
        newNode->prev = prev;
        newNode->next = next;
        return;
    }

}

void print(Node* head){
    Node* temp  = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(5 , head , tail);
    insertAtTail(6 , head , tail);
    insertAtAny(8 , 1 , head  , tail);
    print(head);
    return 0;
}