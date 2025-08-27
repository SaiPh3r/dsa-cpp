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

// Traversals

// NLR - preorder traversal
void preorderTraversal(Node* root){
    // base case
    if(root == NULL){
        return;
    }

    //N
    cout<<root->value<<" ";

    // L
    preorderTraversal(root->left);

    //R
    preorderTraversal(root->right);
}

// LNR-inorder
void inorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    //L
    inorder(root->left);

    // N - Current
    cout<<root->value<<" ";

    //R
    inorder(root->right);
}

// LRN - postorder

void postorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    // L
    postorder(root->left);

    // R
    postorder(root->right);

    // N
    cout<<root->value<<" ";

}

int main(){
    // 10 20 30 -1 -1 40 -1 -1 50 -1 60 -1 -1
    Node* root = build_tree();
    cout<<"printing pre-order"<<endl;
    preorderTraversal(root);
    cout<<endl;

    cout<<"printing inorder"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"printing post-order"<<endl;
    postorder(root);
    cout<<endl;

    return 0;
}