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

public:
    Node *head;
    SLL()
    {
        head = nullptr;
    }

    int len()
    {
        int l = 1;
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
            l++;
        }
        return l;
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

    void add(Node *n)
    {
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
        cout << temp->name << endl;
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

void Intersect(SLL *t1, SLL *t2)
{
    int l1 = t1->len();
    int l2 = t2->len();
    int l = min(l1, l2);
    if (l1 > l2)
    {
        while (l > 0)
        {
            t1->head = t1->head->next;
            l--;
        }
    }

    else if (l1 < l2)
    {
        while (l > 0)
        {
            t2->head = t2->head->next;
            l--;
        }
    }

    while(t1->head->next != t2->head->next){
        t1->head = t1->head->next;
        t2->head = t2->head->next;
    }

    cout<<t1->head->next->name;
}

int main()
{
    SLL *s1 = new SLL();
    SLL *s2 = new SLL();

    Node *a = new Node("a");
    Node *b = new Node("b");
    Node *c = new Node("c");
    Node *d = new Node("d");
    Node *p = new Node("p");
    Node *q = new Node("q");

    s1->add(a);
    s1->add(b);
    s1->add(c);
    s1->add(d);
    s2->add(p);
    s2->add(q);
    s2->add(c);
    s1->display();  
    s2->display();

    Intersect(s1,s2);
}