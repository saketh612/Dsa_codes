#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node*left;
    node*right;

    node(int value)
    {
        left = NULL;
        right = NULL;
        data = value;
    }
};


void InsertAtHead(node*&head , int value)
{
    node*temp = new node(value);
    temp->right =head;
    head->left = temp;
    head = temp;
}

void InsertAtTail(node*&head , int value)
{
    node*tail = new node(value);
    node*temp =head;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    temp->right=tail;
    tail->left=temp;


}

void InsertMiddle(node*&head , int value , int pos)
{
    node*middle = new node(value);
    node*temp =head;
    int count =1;

    while(count<pos-1 && temp->right!=NULL)
    {
           temp=temp->right;
           count++;
    }
    middle->right = temp->right;
    temp->right->left=middle;
    temp->right=middle;

}

void DeleteNode(node*&head ,int pos)
{

    if (pos <= 0)
    {
        cout << "Invalid position. Position should be a positive integer." << endl;
        return;
    }

    node*temp =head;
    node*prev;
    int count =1;
    while(count<pos && temp->right!=NULL)
    {
        prev = temp;
        temp=temp->right;
        count++;
    }

    if (count < pos - 1 || temp == NULL) // Check if position is beyond the length of the linked list
    {
        cout << "Invalid position. Position is beyond the length of the linked list." << endl;
        return;
    }

    prev->right = temp->right;
    temp->right->left = prev;
    delete temp;
}




void display(node*head)
{
    node*temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->right;
        if(temp==NULL)
        {
            cout<<"NULL";
        }
    }
}

int getLength(node*head)
{
    node*temp =head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->right;
    }

    return len;
}



int main()
{

    node*head = new node(5);
    InsertAtHead(head,4);
    InsertAtHead(head,3);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    InsertAtTail(head,6);
    DeleteNode(head,3);
    InsertMiddle(head,3,3);
    display(head);
    cout<<endl;
    cout << "length of the list :" << getLength(head);
    return 0; 


}