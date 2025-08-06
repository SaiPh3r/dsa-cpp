# include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            this->data = val;
            this->next = NULL;
        }
};
//return the head of thr updated linked list
Node* insertAtHead(int value , Node* &head , Node* &tail){
    if(head == NULL && tail == NULL){
        // 1 create a new node
        Node* newNode = new Node(value);
        //2 point head and tail on new node
        head  = newNode;
        tail = newNode;
    }else{
        //1 create new node
        Node* newNode = new Node(value);
        // link the new node to orignal linked list
        newNode->next = head;
        // update the head
        head = newNode;
    }
    return head;
}

Node* insertAtTail(int value , Node* &head , Node* &tail){
    if(head == NULL && tail == NULL){
        // empty 
        // create a node 
        Node* newNode = new Node(value);
        // head and tail at that node
        head = newNode;
        tail = newNode;
    }else{
        //create a new node
        // then link it at the last means tail will be changed
        Node* newNode = new Node(value);
        tail->next = newNode;
        // update the tail
        tail = newNode;
    }
    return head;
}

void printLinkedList(Node *head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}


int main(){
    // empty linked list
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(10 , head , tail);
    insertAtHead(20 , head , tail);
    insertAtTail(40 , head  , tail);
    printLinkedList(head);
    return 0;
}
