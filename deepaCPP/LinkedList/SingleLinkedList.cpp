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
        while (temp->next != temp)
        {
            cout << temp->name << " ";
            temp = temp->next;
        }
        cout << temp->name;
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
    sll->display();
    sll->add();
    sll->display();
}