#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void set_list(Node*&head,Node*&tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;

}

long long max_mum(Node*head)
{
    Node*temp=head;
  int  maxmum=temp->val;
    while(temp!=NULL)
    {
        maxmum=max(maxmum,temp->val);
        temp=temp->next;
    }
    return maxmum;
}

long long min_mum(Node*head)
{
    Node*temp=head;
    int minmum=temp->val;
    while(temp!=NULL)
    {
        minmum=min(minmum,temp->val);
        temp=temp->next;
    }
    return minmum;
}


void print_list(Node*&head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    

}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        set_list(head,tail,val);
    }
    long long max=max_mum(head);
    
    long long min=min_mum(head);
    long long dif=abs(max-min);
    cout<<dif<<endl;
     


     
    return 0;
}