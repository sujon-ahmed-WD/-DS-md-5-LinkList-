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

void setlist(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int samevalue(Node *head)
{
    Node *temp = head;
    cout << temp->val;
}
int samevalue1(Node *head)
{
    Node *temp = head;
    cout << temp->val;
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

int print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
bool sameornot(Node *head, Node *head1)
{
    Node *temp = head;
    Node *temp1 = head1;
    int len = size(head);
    int len1 = size(head1);
    if(len!=len1)
    {
        return false;
    }
    else
    {
        for(int i=0; i<len; i++)
        {
            if(temp->val!=temp1->val)
            {
                return false;
            }
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int x;
    while (cin >> x && x != -1)
    {

        setlist(head, tail, x);
    }

    int y;
    while (cin >> y && y != -1)
    {

        setlist(head1, tail1, y);
    }

    // cout<<len<<endl<<len1<<endl;

    if (sameornot(head, head1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}