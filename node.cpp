#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// insert at starting in singly linked list//
void insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// insert at end
void insertatend(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

// insert at middle

void insertatmiddle(Node *&head, int k, int d)
{
    if (k == 1)
    {
        insertathead(head, d);
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < k - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *temp1node = new Node(d);
    temp1node->next = temp->next;
    temp->next = temp1node;
}
// print function
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)

    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);

    Node *tail = node1;
    Node *head = node1;
    print(head);

    // insertathead(head, 12);
    // print(head);

    // insertathead(head, 15);
    // print(head);
    // insertathead(head, 18);
    // print(head);
    insertatend(tail, 12);
    print(tail);

    insertatend(tail, 45);
    print(tail);
    // insertatend(tail, 167);
    // print(tail);

    // insert at middle

    insertatmiddle(head, 3, 14);
    print(head);
    return 0;
}