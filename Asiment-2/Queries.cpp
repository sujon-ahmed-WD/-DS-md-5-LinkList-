#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, Node*&tail , int val)
{
    Node *newnode = new Node(val);

    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    newnode->next = head;
    head = newnode;
}

void setlist(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    while (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void delete_head(Node*&head)
{
    Node* deletenode=head;
    head=head->next;
    delete deletenode;
}
void delete_any_pos(Node *&head, Node *&tail, int idx)  
{
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
     
}
void delete_tail(Node *&head, Node *&tail, int idx)  
{
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
    tail = temp;
}
int size(Node *head)
{
    int sz = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int test;
    cin >> test;
    while (test--)
    {
        int idx, val;
        cin >> idx>>val;
        if(idx==0)
        {
            insert_at_head(head,tail,val);
            print(head);
        }
        else if(idx==1)
        {
            setlist(head,tail,val);
            print(head);
        }
        else if(idx==2)
        {
            int len=size(head);
            if(val==0) // 1 data // index=0 hola
            {
                delete_head(head);
                print(head);
            }
            else if(len-1==val) // size soman 
            {
                delete_tail(head,tail,val);
                print(head);
            }
            else if(val<len)
            {
                delete_any_pos(head,tail,val);
                print(head);
            }
            else
            {
                print(head);
            }
        }

    }

    return 0;
}
