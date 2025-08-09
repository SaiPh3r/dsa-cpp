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
        for(int i=0; i<=position-2;i++){
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

int search(Node* head , int taget){
    Node* temp = head;
    while(temp!= NULL){
        if(temp->data == taget){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

void dlt(Node* &head ,Node* &tail ,  int position ){
    // case 1: if empty
    if(head == NULL){
        return;
    }
    // case 2: Single
    if(head == tail && position ==1){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    // case 3: 1st element
    if(position ==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
        return;
    }
    // handeling tail case 
    if(len(head) == position){
        Node* temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;

    }else{
        Node* prev = head;
        for(int i = 0; i < position - 2; i++){
            prev = prev->next;
        }
        Node* current = prev->next;
        Node* forward = current->next;

        // logic;
        prev->next = forward;
        current->prev  = NULL;
        forward->prev = prev;
        current->next = NULL;
        delete current;
        return;
    }
}



int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(5 , head , tail);
    insertAtTail(6 , head , tail);
    insertAtAny(8 , 1 , head  , tail);
    print(head);
    cout<<endl;
    cout<<search(head , 5)<<endl;
    cout<<search(head , 53)<<endl;
    dlt(head , tail, 2);
    print(head);
    return 0;
}


// git fix