#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;

public:
    void insert(int x);
    void print();
};

Node *head;
void Node::insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Node::print()
{
    Node *temp = head;
    cout << "list is:"
         << " " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}

int main()
{

    Node list;
    head = NULL;
    int number;
    int n;

    cout << "enter the size of a list";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "enter the number";
        cin >> number;

        list.insert(number);
        list.print();
    }
    return 0;
}