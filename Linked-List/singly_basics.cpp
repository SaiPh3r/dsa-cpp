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
    cout<<endl;
}

int findLen(Node* head){
    int l = 0;
    Node* temp = head;
    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}



bool search(Node* head , int target){
    Node*temp = head;
    while(temp!=NULL){
        if(temp->data == target ){
            return true;
        }else{
            temp = temp->next;
        }
    }
    return false;

}

void insertRandom(Node*  head , Node* tail , int position , int value ){
    if(position ==1){
        insertAtHead(value , head , tail);
        return ;
    }

    int l = findLen(head);
    if(position == l+1){
        insertAtTail(value , head ,tail);
    }else{
        // create a new node
        Node* newnode = new Node(value);
        // create temp
        Node* temp = head;
        // that position -2 logic
        for(int i=0 ; i<=position-2 ; i++){
            temp = temp->next;
        }
        // now new node ->next = temp
        newnode->next = temp->next;
        temp->next = newnode;

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
    cout<<search(head , 100)<<endl;
    cout<<search(head , 20)<<endl;
    cout<<findLen(head);
    insertRandom(head , tail , 2 , 1000);
    printLinkedList(head);
    return 0;
}
