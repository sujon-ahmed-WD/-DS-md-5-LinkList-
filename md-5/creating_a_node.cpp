#include <bits/stdc++.h>
using namespace std;
class Node
{ // class and object daoer uddoso holo ja node modda val+nextp aksatha asa ti ...
public:
    int val;
    Node *next; // akna amier next pointer dara try kora hoycaa

    Node(int val)
    {
        this->val = val; // this use kora karon hocca para meteer amir val and next agola kar kar ti use hoyca ..
        this->next = NULL;
    }
};
int main()
{
    Node a(10), b(20), c(30);

    a.next = &b;
    b.next = &c;

    cout << a.val << " " << b.val << " " << c.val << endl;
    cout << (*a.next).val << endl;
    return 0;
}