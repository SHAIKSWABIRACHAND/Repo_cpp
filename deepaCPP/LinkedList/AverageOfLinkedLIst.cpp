

/*

Write a C++ program for the singly linked list, where each node contains an value and a pointer to the next node in the list. 
implement a function to calculate the  average of the list.
input:"apple" -> "banana" -> "cherry" -> "date"
Output: average of the linked list: 2
*/


// asumme the dat is int type

#include<iostream>
using namespace std;

class Node{

    public:
        Node* next;
        int data;
        Node(int n){
            data = n;
            next = nullptr;
        }

};

class List{
    public:
        Node* head;

        List(){
            head = nullptr;
        }
        List(Node* a){
            head = a;
        }
       void  add(Node* a){
            Node* temp = head;
            if(head->next == nullptr){
                head = a;
            }

            else{
                while(temp->next != nullptr){
                    temp = temp->next;
                }

                temp->next = a;
            }
        }
};

int average(List* l){
    Node *a = l->head;
    int avg = 0;
    int len = 1;
    while(a->next!=nullptr){
        avg  = avg+a->data;
        len++;
        a = a->next;
       
    }

    return avg/len;
}

int main(){
    List *s = new List();
    s->add(new Node(1));
    s->add(new Node(1));
    cout<<average(s);
}