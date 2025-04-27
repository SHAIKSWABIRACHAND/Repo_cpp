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

TreeNode* InSuc(TreeNode* root,int target,TreeNode* success)
{
	if(root == nullptr) return success;
	if(root->data>target){
		return InSuc(root->left,target,root);
		
	}
	if(root->data<target){
		return InSuc(root->right,target,success);
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


void DeleteNode(TreeNode* &root,int target){
    if(root == nullptr){
        return;
    }
    
    if(root->data > target){
        DeleteNode(root->left,target);
    }
    else if(root->data < target){
        DeleteNode(root->right,target);
    }
    else{
        // case 1: no child
        if(root->left == nullptr && root->right == nullptr){
            delete root;
            root = nullptr;
            return;
        }
        
        // case 2: one leaf child
        if(root->left == nullptr){
            TreeNode* temp = root->right;
            delete root;
            root = temp;
            return;
        }
        
        if(root->right == nullptr){
            TreeNode* temp = root->left;
            delete root;
            root = temp;
            return;
        }
	
        
        // case 3: two children
 /*      TreeNode* minNode = root->right;
        while(minNode->left != nullptr){
            minNode = minNode->left;
        }
        
        root->data = minNode->data;
        DeleteNode(root->right,minNode->data);
		
		*/ 
		TreeNode* succ = InSuc(root,root->data,nullptr);
        TreeNode* temp = root;
        root->data = succ->data;
        succ->data = temp->data;
        DeleteNode(succ,target);
    }
        

}

TreeNode* FindMin(TreeNode* root){
    TreeNode* min = root;
    if(root == nullptr){
        return min;
    }
	return FindMin(root->left);
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

    void Delete(int a){
        DeleteNode(root,a);    
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