/*

WRITE A C++ Program for the singly linked list, where each node contains an value and a pointer to the next node in the list. 
implement a function to calculate the length of the list.
input:"apple" -> "banana" -> "cherry" -> "date"

Output: Length of the linked list: 4

*/

#include<iostream>
using namespace std;

class Node{
    public:
        string data;
        Node *next;
    public:
        Node(string name){
            data = name;
            next = nullptr;
        }
        
        ~Node(){
            cout<<"deleted "<<data;
        }
};


    class List{
        private:
            Node *head;
        public:
            List(){
                head = nullptr;
            }
            
            void add(Node *a){
                Node* temp = head;
                if(head == nullptr){
                    head = a;
                }
                
                else{
                    while(temp->next != nullptr){
                        temp = temp->next;
                    }
                        temp->next = a;
                }
            }
            
            
            Node* getHead(){
                return head;
            }
    };
    
    int length(List *a){
        Node *n = a->getHead();
        int l = 1;
        while(n->next != nullptr){
            l++;
            n = n->next;
        }
        return l;
    }
int main(){
    List *s = new List();
    s->add(new Node("h"));
    s->add(new Node("i"));
    cout<<length(s);
}