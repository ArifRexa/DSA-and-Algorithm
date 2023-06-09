#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    node *Left;
    node *Right;
    node *Parent;
};

class BinaryTree
{
public:
    node *root;

    BinaryTree()
    {
        root = NULL;
    }

    node *CreateNewNode(int id)
    {
        node *newnode = new node;
        newnode->id = id;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->Parent = NULL;
        return newnode;
    }

    void build_binary_tree()
    {

        node *allnode[6];
        for (int i = 0; i < 6; i++)
        {
            allnode[i] = CreateNewNode(i);
        }
        allnode[0]->Left = allnode[1];
        allnode[0]->Right = allnode[2];

        allnode[1]->Left = allnode[5];
        allnode[1]->Parent = allnode[0];

        allnode[2]->Left = allnode[3];
        allnode[2]->Right = allnode[4];
        allnode[2]->Parent = allnode[0];

        allnode[5]->Parent = allnode[1];

        allnode[3]->Parent = allnode[2];
        allnode[4]->Parent = allnode[2];

        root = allnode[0];
    }

    void BFS(){
        queue<node*>q;
        q.push(root);

        while (!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p  = -1, l = -1, r = -1;
            if (a->Parent != NULL)
            {
                p = a->Parent->id;
            }
            if (a->Left != NULL)
            {
                l = a->Left->id;
                q.push(a->Left);
            }
            if (a->Right != NULL)
            {
                r = a->Right->id;
                q.push(a->Right);
            }
            cout<<"Node id :"<<a->id<<" Left child = "<<l;

            cout<<" Right child = "<<r<<" Parent id = "<<p<<endl;
        }
        
    }
};

//                 0
//      1                   2
// 5                    3       4

int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
    // bt.print_tree_info();
    bt.BFS();
    return 0;
}