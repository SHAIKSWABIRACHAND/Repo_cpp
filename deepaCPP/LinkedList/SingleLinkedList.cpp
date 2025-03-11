#include <iostream>
using namespace std;

class Node
{

public:
    string name;
    Node *next;
    Node(string value)
    {
        name = value;
        next = nullptr;
    }

    ~Node()
    {
        cout << "Destructor called for " << name;
    }
};

class SLL
{
private:
    Node *head;
public:
    
    SLL()
    {
        head = nullptr;
    }

    void add(string value)
    {
        Node *n = new Node(value);
        if (head == nullptr)
        {
            head = n;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = n;
    }

    void add()
    {
        cout << "Enter the name";
        string s;
        cin >> s;
        Node *n = new Node(s);
        if (head == nullptr)
        {
            head = n;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = n;
    }
    void display()
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            cout << temp->name << " ";
            temp = temp->next;
        }
        cout << temp->name;
    }

    void reverse()
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *future = current->next;

        while (current->next != nullptr)
        {

            current->next = prev;
            prev = current;
            current = future;
            future = future->next;
        }
        current->next = prev;
        head = current;
    }
};

int main()
{
    SLL *sll = new SLL();
    sll->add("Hannu1");
    sll->add("Hannu2");
    sll->add("Hannu3");
    sll->add("Hannu4");
    sll->add("Hannu5");

    sll->reverse();

    sll->display();
}