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



void InsertAtHead(node*&head, int value)
{
    node*temp = new node(value);
    if(head==NULL)
    {
        head = temp; 
        temp->next = head;
        return;
    }
    node*tail = head;
    while(tail->next!=head && tail->next!=NULL) // Add null check in the condition
    {
        tail = tail->next;
    }
    tail->next = temp;
    temp->next = head;
    head = temp;
}

void InsertAtTail(node*&head,int value)
{
    if(head==NULL)
    {
        node*newnode =new node(value);
        head = newnode;
        newnode->next = head;
        return;
    }

    node*newnode = new node(value);
    node*tail =head;
    while(tail->next!=head && tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next = newnode;
    newnode->next = head;


}


void InsertNode(node*&head, int value ,int element)
{
    if(head==NULL)
    {
        node*newnode =new node(value);
        head = newnode;
        newnode->next = head;
        return;
    }
  
  //
    node*middle = new node(value);
    node*temp =head;
    while(temp->data!=element)
    {
        temp=temp->next;
    }
    middle->next = temp->next;
    temp->next = middle;


}

void InsertAtMiddle(node*&head,int pos,int value)
{
     if (pos <= 0)
    {
        cout << "Invalid position. Position should be a positive integer." << endl;
        return;
    }

    int count = 1;
     node *middle = new node(value);
    // if (head == NULL && pos == 1) // Insert at head if linked list is empty and position is 1
    // {
    //     head = middle; 
    //     temp->next = head;
    //     return;
    // }
    
    node *temp = head;
    while (count < pos - 1 && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }

    middle->next = temp->next;
    temp->next = middle;
}


void display(node *head)
{
    if (head == NULL)
    {
        cout << "empty linked list";
        return;
    }
    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "head";
}





int main()
{
    node*head = NULL;
    InsertAtHead(head, 4);
    InsertAtHead(head, 3);
    InsertAtMiddle(head,2,0);
     InsertNode(head,1,0);
     InsertAtTail(head,10);
    // InsertNode(head,2,5);
    display(head); // Call to display the circular linked list
    return 0;
}