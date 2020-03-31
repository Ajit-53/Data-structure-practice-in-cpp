#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

Node* add()
{
    int data;
    cin>>data;

    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1)
    {
        Node* temp=new Node(data);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else{
       tail->next=temp;
       tail=tail->next;

    }
    cin>>data;
    }
    return head;
}

void print(Node* head)
{
   if(head==NULL)
   {
       cout<<"no data in linkedlist";
    
   }
   {
       Node *temp=head;
       while(temp!=NULL)
       {
           cout<<temp->data<<" ";
           temp=temp->next;
       }
   }
}
int main()
{
    Node *head=NULL;

   head=add();
   print(head);
    return 0;
}