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


void levelTraversal(Node * root)
{
    // prints the elemnets in level wise 
    
    if(root == nullptr){
        cout<<"No Nodes found"<<endl;
        return;
        
    }
    
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *n = q.front();
        cout<<n->data<<endl;
        q.pop();
        if(n->left != nullptr){
            q.push(n->left);
        }
        if(n->right != nullptr){
            q.push(n->right);
        }
    }
    
    
}

void m1(Node * root)
{
    
}
int main(int argc, char const *argv[])
{
    Node * root = new Node(20);
    root->left = new Node(80);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(78);
    root->right->left = new Node(31);
    
    
    Node *root2 = nullptr;
    levelTraversal(root2);
    levelTraversal(root);
    

    return 0;
}

