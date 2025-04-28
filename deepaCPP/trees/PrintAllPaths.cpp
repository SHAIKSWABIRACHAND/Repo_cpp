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

void PrintAllPaths(TreeNode* root, string path){
    if (root == nullptr) return;
    path = path + to_string(root->data) + "-->";
    if(root->left != nullptr)
    {
        PrintAllPaths(root->left,path);
    }

    if(root->right != nullptr)
    {
        PrintAllPaths(root->right,path);
    }
    if(root->left == nullptr and root->right == nullptr){
        cout<<path<<endl;
    }
}


string PrintMaxPath(TreeNode* root,string path,string maxPath){
    if (root == nullptr) return "";
    path = path + to_string(root->data) + "-->";
    if(root->left != nullptr)
    {
        return PrintMaxPath(root->left,path,maxPath);
    }

    if(root->right != nullptr)
    {
        return PrintMaxPath(root->right,path,maxPath);
    }
    if(root->left == nullptr and root->right == nullptr){
        maxPath = maxPath.length()<path.length()? path:maxPath;
        return maxPath;
    }
}
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

int Height(TreeNode* root,int height){
    if(root == nullptr){
        return -1;
    }
     height += 1;
     if(root->left != nullptr){
        Height(root->left,height);
     }
     if(root->right != nullptr){
        Height(root->right,height);
     }
     if(root->left == nullptr && root->right){
        return height
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

    void printPaths(){
        PrintAllPaths(root,"");
    }
    
};


int main(){
    BST bst = BST();
    bst.root = new TreeNode(20);
    bst.insert(10);
    bst.insert(30);
    bst.insert(13);
    // bst.insert(10);
    // bst.insert(50);
    bst.insert(15);
    bst.insert(14);
    // bst.insert(16);
    cout<<PrintMaxPath(bst.root,"","");
}