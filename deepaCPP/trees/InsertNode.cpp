#include<iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data){
        
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
    
};

void Print(TreeNode* root){
    if(root == nullptr){
        return;
    }
    
    Print(root->left);
    cout<<root->data<<" ";
    Print(root->right);
}

void InsertNode(TreeNode* &root,int target){
    if(root == nullptr){
        root = new TreeNode(target);
        // cout<<"success";
        return;
    }
    if(root->data >target){
        InsertNode(root->left,target);
    }
    if(root->data<target){
        InsertNode(root->right,target);
    }
}

class BST{
    
    public:
    TreeNode* root;
    BST(){
        root = nullptr;
    }
    
    void insert(int a){
        InsertNode(root,a);
    }
    
    void print(){
        Print(root);
    }
    
};


int main(){
    BST bst = BST();
    bst.root = new TreeNode(1);
    bst.insert(3);
    bst.insert(2);
    bst.insert(4);
    bst.print();
    
}