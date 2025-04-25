/*wite a cpp program to print all the leaf nodes


*/
#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
    int data; 
    Node *right;
    Node *left;
    Node(int data):data(data){right = nullptr;left=nullptr;}
};


void printAllLeafNodes(Node * root)
{   
    if(root == nullptr){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(! q.empty()){
          Node *n = q.front();
          q.pop();
          if(n->left != nullptr){
              q.push(n->left);
          }
          if(n->right != nullptr){
              q.push(n->right);
          }
          if(n->left == nullptr && n->right == nullptr){
              cout<<n->data<<endl;
          }
          
    }
    
  
}
int main(int argc, char const *argv[])
{
    Node * root = new Node(20);
    root->left = new Node(80);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(78);
    root->right->left = new Node(31);
    printAllLeafNodes(root);

    return 0;
}