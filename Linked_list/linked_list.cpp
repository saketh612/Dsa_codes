#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void InsertAtHead(node *&head, int value)
{
    node *temp = new node(value);
    temp->next = head;
    head = temp;
}

void InsertAtTail(node *&head, int value)
{
    node *tail = new node(value);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = tail;
}

void InsertAtMiddle(node *&head, int value, int pos)
{
    if (pos <= 0)
    {
        cout << "Invalid position. Position should be a positive integer." << endl;
        return;
    }

    int count = 1;
    node *middle = new node(value);

    
    if (head == NULL && pos == 1) // Insert at head if linked list is empty and position is 1
    {
        head = middle;
        return;
    }
    
    node *temp = head;
    while (count < pos - 1 && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }

    if (count < pos - 1 || temp == NULL) // Check if position is beyond the length of the linked list
    {
        cout << "Invalid position. Position is beyond the length of the linked list." << endl;
        return;
    }
    middle->next = temp->next;
    temp->next = middle;
}

void DeleteNode(node *&head,int pos)
{
    int count = 1;
    node *prev;
    node *temp = head;
    while (count < pos && temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }
    prev->next = temp->next;
    delete temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "NULL";
        }
    }
}
int main()
{
    node *head = new node(5);
    InsertAtHead(head, 4);
    InsertAtHead(head, 3);
    InsertAtHead(head, 2);
    InsertAtHead(head, 1);
    InsertAtTail(head, 6);
    InsertAtMiddle(head, 0, 4);
    DeleteNode(head, 4);
    display(head);
    return 0;
}