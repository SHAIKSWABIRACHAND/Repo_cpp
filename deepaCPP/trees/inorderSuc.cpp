#include<iostream>
using namespace std;
class TreeNode
{
public:
	int data;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int data)
	{
		this->data = data;
		left = nullptr;
		right = nullptr;
	}
};

TreeNode* Min(TreeNode* root){
	if(root==nullptr) return root;
	return Min(root->left);
	
}

TreeNode* InSuc(TreeNode* root,int target,TreeNode* success)
{
	if(root == nullptr) return success;
	if(root->data>target){
		InSuc(root->left,target,root);
	}
	if(root->data<target){
		InSuc(root->right,target,success);
	}
	
}



class BST
{
	TreeNode* root;
	public:
	BST(){
		root = nullptr;
	}
	
	// add a insertNode function here
	
	TreeNode* inorderSuc(int a)
	{
		return InSuc(root,a,nullptr);
	}
		
	
	
};
	
	int main()
	{ 
	cout<<"hello";
	
	return 0;
	}