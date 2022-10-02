#include <iostream>
using namespace std;

class node
{
public:
    int num;
    node *next;
    node(int x)
    {
        num = x;
        next = NULL;
    }
};
// insert the node at the end of list
void insertnode(node *&head, int data)
{
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)

        temp = temp->next;
    temp->next = newNode;
}

void insertnode2(node *&head2, int data)
{
    node *newNode = new node(data);
    if (head2 == NULL)
    {
        head2 = newNode;
        return;
    }

    node *temp = head2;
    while (temp->next != NULL)

        temp = temp->next;
    temp->next = newNode;
}

void printlist(node *head)
{
    while (head->next != NULL)
    {
        cout << head->num << "->";
        head = head->next;
    }
    cout << head->num << endl;
}

///
node *addTwoNumbers(node *&head, node *&head2)
{
    // Write your code here.

    node *dummy = new node(0);
    node *temp = dummy;
    int carry = 0;
    while (head != NULL || head2 != NULL || carry)
    {
        int sum = 0;
        if (head != NULL)
        {
            sum += head->num;
            head = head->next;
        }
        if (head2 != NULL)
        {
            sum += head2->num;
            head2 = head2->next;
        }
        sum += carry;
        carry = sum / 10;
        node *node1 = new node(sum % 10);
        temp->next = node1;
        temp = temp->next;
    }
    return dummy->next;
}
void printlist(node *dummy)
{
    node *temp = dummy;
    while (temp->next != NULL)
    {
        temp->next = temp;
    }
}

int main()
{
    node *head = NULL;
    node *head2 = NULL;
    // inserting node
    insertnode(head, 1);
    insertnode(head, 4);
    insertnode(head, 2);
    insertnode(head, 5);
    // printing given list
    cout << "Given Linked List:\n";
    printlist(head);

    insertnode2(head2, 3);
    insertnode2(head2, 7);
    insertnode2(head2, 9);
    insertnode2(head2, 8);
    insertnode2(head2, 3);
    printlist(head2);

    addTwoNumbers(head, head2);
    printlist(head);
    return 0;
}