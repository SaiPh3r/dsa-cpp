#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* buildBst(Node* root , int value){
    if(root == NULL){
        root = new Node(value);
        return root;
    }

    else if (value>root->data){
        root->right = buildBst(root->right , value);
    }else{
        root->left = buildBst(root->left , value);
    }

    return root;
}

Node* createBst(Node* root){
    cout<<"enter the value for the node: "<<endl;
    int val;
    cin>>val;

    while(val!=-1){
        root = buildBst(root , val);
        cout<<"enter the value for the node"<<endl;
        cin>>val;
    }
    return root;

}
//nlr
void preorder(Node* root ){
    if(root ==  NULL){
        return;
    }
    // n
    cout<<root->data<<" ";

    //l
    preorder(root->left);

    //r
    preorder(root->right);

}



int main(){
    Node* root = NULL;
    root = createBst(root);
    preorder(root);
    return 0; 

}