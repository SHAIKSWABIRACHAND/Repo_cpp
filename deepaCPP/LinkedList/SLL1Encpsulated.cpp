#include <iostream>
using namespace std;

class Node {
private:
    string name;
    Node *next;
public:
    Node(string value) {
        name = value;
        next = nullptr;
    }

    string getname() {
        return name;
    }

    Node* getNext() {
        return next;
    }

    void setname(string name) {
        this->name = name;
    }

    void setNext(Node *next) {
        this->next = next;
    }

    ~Node() {
        cout << "Destructor called for " << name << endl;
    }
};

class SLL {
private:
    Node *head;
public:
    SLL() {
        head = nullptr;
    }

    void add(string value) {
        Node *n = new Node(value);
        if (head == nullptr) {
            head = n;
            return;
        }

        Node *temp = head;
        while (temp->getNext() != nullptr) {
            temp = temp->getNext();  // Move temp forward
        }

        temp->setNext(n);  // Attach new node
    }

    void display() {
        Node *temp = head;
        while (temp != nullptr) {
            cout << temp->getname() << " ";
            temp = temp->getNext();  // Move temp forward
        }
        cout << endl;
    }

    ~SLL() {
        Node *temp = head;
        while (temp != nullptr) {
            Node *next = temp->getNext();
            delete temp;  // Free each node
            temp = next;
        }
        cout << "SLL Destructor called" << endl;
    }
};

int main() {
    cout << "hello" << endl;
    SLL* sll = new SLL();  // Heap allocation

    sll->add("Hannu1");
    sll->add("Hannu2");
    sll->add("Hannu3");
    sll->add("Hannu4");
    sll->add("Hannu5");

    sll->display();

    delete sll;  // Free memory
}
