#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* left = NULL;
    Node* right = NULL;

    Node(int data){
        this->value = data;
        this->left = NULL;
        this->right = NULL;
    }   
};


Node* build_tree(){
    int value;
    cin>>value;

    if(value == -1){
        return NULL;
    }else{
        Node* root = new Node(value);
        root->left = build_tree();
        root->right = build_tree();

        return root;
    }
}

int main(){
    return 0;
}