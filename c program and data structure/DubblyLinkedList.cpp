#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    node *CreateNewNode(int data)
    {
        node *newNode = new node;
        newNode->data = data;
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    void InsertAtHead(int data)
    {

        node *a = CreateNewNode(data);
        sz++;
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head->prv = a;
        head = a;
    }

    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    void InsertAtAnyPoint(int idx, int data)
    {
        if (idx > sz)
        {
            cout << idx << " doesn't exist\n";
            return;
        }

        if (idx == 0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int current_index = 0;
        while (current_index != idx - 1)
        {
            a = a->nxt;
            current_index++;
        }
        node *newNode = CreateNewNode(data);
        newNode->nxt = a->nxt;
        newNode->prv = a;

        node *b = a->nxt;
        b->prv = newNode;
        a->nxt = newNode;
        sz++;
    }

    void Delete(int idx)
    {
        if (idx >= sz)
        {
            cout << idx << " doesn't exist\n";
            return;
        }

        node *a = head;
        int current_index = 0;
        while (current_index != idx)
        {
            a = a->nxt;
            current_index++;
        }

        node *b = a->prv;
        node *c = a->nxt;
        if (b != NULL)
        {
            b->nxt = c;
        }
        if (c != NULL)
        {
            c->prv = b;
        }
        delete a;
        if (idx == 0)
        {
            head = c;
        }
        sz--;
    }

    void Reverse()
    {
        if (head==NULL)
        {
            return;
        }
        
        node *a = head;
        int current_index = 0;
        while (current_index != sz - 1)
        {
            a = a->nxt;
            current_index++;
        }

        node *b = head;
        while (b != NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }

    int getSize()
    {
        return sz;
    }
};

int main()
{

    DoublyLinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(1);
    l.Traverse();
    l.InsertAtHead(20);
    l.Traverse();
    cout << l.getSize() << "\n";

    l.InsertAtAnyPoint(2, 100);
    l.Traverse();
    cout << l.getSize() << "\n";
    l.Delete(1);
    l.Traverse();
    cout << l.getSize() << "\n";
    l.Reverse();
    l.Traverse();
    return 0;
}