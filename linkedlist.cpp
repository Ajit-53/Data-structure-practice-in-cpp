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
    Node* temp=new Node(data);
    Node* head=NULL;
    while(data!=-1)
    {
    if(head==NULL)
    {
        head=temp;
    }
    else{
        Node *temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;

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