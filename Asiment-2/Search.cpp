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
    Node *newnode = new Node(val)

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
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

int Search(Node *head, int val)
{
    int len = size(head);
    Node *temp = head;
    for (int i = 0; i < len; i++)
    {
        if (temp->val == val)
        {
            return i;
        }
        temp = temp->next;
    }
   return -1;
}

void sum(int a, int b)
{
    int add = a + b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (cin >> val && val != -1)
        {

            setlist(head, tail, val);
        };

        int x;
        cin >> x;
        cout<<Search(head, x)<<endl ;
    // print(head);
    }

    return 0;
}
