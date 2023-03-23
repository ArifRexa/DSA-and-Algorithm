// // STACK USING static ARRAY
// #include <bits/stdc++.h>
// using namespace std;
// const int Max_Size = 500;

// class Stack
// {
// public:
//     int a[Max_Size];
//     int stack_size;

//     Stack()
//     {
//         stack_size = 0;
//     }

//     // Add an element in stack O(1)
//     void Push(int value)
//     {
//         if (stack_size + 1 > Max_Size)
//         {
//             cout << "The stack is full\n";
//             return;
//         }
//         stack_size++;
//         a[stack_size - 1] = value;
//     }

//     // delete top most element from the stack O(1)
//     void POP()
//     {
//         if (stack_size == 0)
//         {
//             cout << "The stack is empty.POP not possible.\n";
//             return;
//         }
//         a[stack_size - 1] = 0;
//         stack_size--;
//     }

//     // Return top element from the stack O(1)
//     int Top()
//     {
//         if (stack_size == 0)
//         {
//             cout << "The stack is empty.No value cant be shown.\n";
//             return -1;
//         }
//         return a[stack_size - 1];
//     }
// };

// int
// main()
// {
//     Stack st;
//     st.Push(3);
//     cout << st.Top() << "\n";
//     st.Push(5);
//     cout << st.Top() << "\n";
//     st.Push(7);
//     cout << st.Top() << "\n";
//     st.Push(4);
//     cout << st.Top() << "\n";
//     st.Push(6);
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();

//     return 0;
// }

// // STACK USING Dynamic ARRAY
// #include <bits/stdc++.h>
// using namespace std;

// class Stack
// {
// public:
//     int *a;
//     int stack_size;
//     int array_capacity;

//     Stack()
//     {
//         a =  new int[1];
//         array_capacity = 1;
//         stack_size = 0;
//     }

//     void IncreaseSize(){
//         int* temp;
//         temp = new int[array_capacity*2];
//         for (int i = 0; i < array_capacity; i++)
//         {
//             temp[i] = a[i];
//         }
//         swap(a, temp);
//         delete []temp;
//         array_capacity*=2;

//     }

//     // Add an element in stack O(1)
//     void Push(int value)
//     {
//         if (stack_size + 1 > array_capacity)
//         {
//             IncreaseSize();
//         }
//         stack_size++;
//         a[stack_size - 1] = value;
//     }

//     // delete top most element from the stack O(1)
//     void POP()
//     {
//         if (stack_size == 0)
//         {
//             cout << "The stack is empty.POP not possible.\n";
//             return;
//         }
//         a[stack_size - 1] = 0;
//         stack_size--;
//     }

//     // Return top element from the stack O(1)
//     int Top()
//     {
//         if (stack_size == 0)
//         {
//             cout << "The stack is empty.No value cant be shown.\n";
//             return -1;
//         }
//         return a[stack_size - 1];
//     }
// };

// int
// main()
// {
//     Stack st;
//     st.Push(3);
//     cout << st.Top() << "\n";
//     st.Push(5);
//     cout << st.Top() << "\n";
//     st.Push(7);
//     cout << st.Top() << "\n";
//     st.Push(4);
//     cout << st.Top() << "\n";
//     st.Push(6);
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();

//     return 0;
// }

// // STACK USING Doubly Linked List
// #include <bits/stdc++.h>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *nxt;
//     node *prv;
// };

// class DoublyLinkedList
// {
// public:
//     node *head;
//     int sz;
//     DoublyLinkedList()
//     {
//         head = NULL;
//         sz = 0;
//     }

//     node *CreateNewNode(int data)
//     {
//         node *newNode = new node;
//         newNode->data = data;
//         newNode->nxt = NULL;
//         newNode->prv = NULL;

//         return newNode;
//     }

//     void InsertAtHead(int data)
//     {

//         node *a = CreateNewNode(data);
//         sz++;
//         if (head == NULL)
//         {
//             head = a;
//             return;
//         }
//         a->nxt = head;
//         head->prv = a;
//         head = a;
//     }

//     void Traverse()
//     {
//         node *a = head;
//         while (a != NULL)
//         {
//             cout << a->data << " ";
//             a = a->nxt;
//         }
//         cout << "\n";
//     }

//     void InsertAtAnyPoint(int idx, int data)
//     {
//         if (idx > sz)
//         {
//             cout << idx << " doesn't exist\n";
//             return;
//         }

//         if (idx == 0)
//         {
//             InsertAtHead(data);
//             return;
//         }
//         node *a = head;
//         int current_index = 0;
//         while (current_index != idx - 1)
//         {
//             a = a->nxt;
//             current_index++;
//         }
//         node *newNode = CreateNewNode(data);
//         newNode->nxt = a->nxt;
//         newNode->prv = a;

//         node *b = a->nxt;
//         b->prv = newNode;
//         a->nxt = newNode;
//         sz++;
//     }

//     void DeleteAtHead(){
//         if (head == NULL)
//         {
//             return;
//         }
//         node* a = head;
//         node* b = head->nxt;
//         delete a;

//         if (b != NULL)
//         {
//             b->prv = NULL;
//         }
//         head = b;
//         sz--;
//     }

//     void Delete(int idx)
//     {
//         if (idx >= sz)
//         {
//             cout << idx << " doesn't exist\n";
//             return;
//         }

//         node *a = head;
//         int current_index = 0;
//         while (current_index != idx)
//         {
//             /* code */
//             a = a->nxt;
//             current_index++;
//         }

//         node *b = a->prv;
//         node *c = a->nxt;
//         if (b != NULL)
//         {
//             b->nxt = c;
//         }
//         if (c != NULL)
//         {
//             /* code */
//             c->prv = b;
//         }
//         delete a;
//         if (idx == 0)
//         {
//             /* code */
//             head = c;
//         }
//         sz--;
//     }

//     void Reverse()
//     {
//         if (head==NULL)
//         {
//             /* code */
//             return;
//         }

//         node *a = head;
//         int current_index = 0;
//         while (current_index != sz - 1)
//         {
//             a = a->nxt;
//             current_index++;
//         }

//         node *b = head;
//         while (b != NULL)
//         {
//             /* code */
//             swap(b->nxt, b->prv);
//             b = b->prv;
//         }
//         head = a;
//     }

//     int getSize()
//     {
//         return sz;
//     }
// };

// class Stack{
//     public:
//     DoublyLinkedList dl;

//     Stack(){

//     }

//     int Top(){
//         if(dl.getSize() ==0){
//             cout<<"Stack is empty. Nothing can be shown.\n";
//             return -1;
//         }
//         return dl.head->data;
//     }

//     void Push(int value){
//         dl.InsertAtHead(value);
//     }

//     void POP(){
//         if (dl.getSize() == 0)
//         {
//             cout<<"Stack is empty. Nothing can be POP.\n";
//             return ;
//         }
//         dl.DeleteAtHead();

//     }

// };

// int main()
// {

//     Stack st;
//     st.Push(3);
//     cout << st.Top() << "\n";
//     st.Push(5);
//     cout << st.Top() << "\n";
//     st.Push(7);
//     cout << st.Top() << "\n";
//     st.Push(4);
//     cout << st.Top() << "\n";
//     st.Push(6);
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();

//     return 0;
// }

// // Templet based STACK USING Dynamic ARRAY
// #include <bits/stdc++.h>
// using namespace std;

// template <class T>
// class Stack
// {
// public:
//     T *a;
//     int stack_size;
//     int array_capacity;

//     Stack()
//     {
//         a =  new T[1];
//         array_capacity = 1;
//         stack_size = 0;
//     }

//     void IncreaseSize(){
//         T* temp;
//         temp = new T[array_capacity*2];
//         for (int i = 0; i < array_capacity; i++)
//         {
//             temp[i] = a[i];
//         }
//         swap(a, temp);
//         delete []temp;
//         array_capacity*=2;

//     }

//     // Add an element in stack O(1)
//     void Push(T value)
//     {
//         if (stack_size + 1 > array_capacity)
//         {
//             IncreaseSize();
//         }
//         stack_size++;
//         a[stack_size - 1] = value;
//     }

//     // delete top most element from the stack O(1)
//     void POP()
//     {
//         if (stack_size == 0)
//         {
//             cout << "The stack is empty.POP not possible.\n";
//             return;
//         }
//         stack_size--;
//     }

//     // Return top element from the stack O(1)
//     T Top()
//     {
//         if (stack_size == 0)
//         {
//             cout << "The stack is empty.No value cant be shown.\n";
//             // T a;
//             return -1;
//         }
//         return a[stack_size - 1];
//     }
// };

// int
// main()
// {
//    Stack<double> st;
//    st.Push(3.5);
//    st.Push(4.5);
//    st.Push(5.5);
//    cout<<st.Top()<<"\n";
//    st.POP();
//    cout<<st.Top()<<"\n";
//    st.POP();
//    cout<<st.Top()<<"\n";
//    st.POP();
//    cout<<st.Top()<<"\n";
//    st.POP();

//     return 0;
// }

// Templet based STACK USING Doubly Linked List
// #include <bits/stdc++.h>
// using namespace std;

// template <class T>
// class node
// {
// public:
//     T data;
//     node *nxt;
//     node *prv;
// };

// template <class T>
// class DoublyLinkedList
// {
// public:
//     node<T> *head;
//     int sz;
//     DoublyLinkedList()
//     {
//         head = NULL;
//         sz = 0;
//     }

//     node<T> *CreateNewNode(T data)
//     {
//         node<T> *newNode = new node<T>;
//         newNode->data = data;
//         newNode->nxt = NULL;
//         newNode->prv = NULL;

//         return newNode;
//     }

//     void InsertAtHead(T data)
//     {

//         node<T> *newNode = CreateNewNode(data);
//         sz++;
//         if (head == NULL)
//         {
//             head = newNode;
//             return;
//         }
//         node<T> *a = head;
//         newNode->nxt = a;
//         a->prv = newNode;
//         head = newNode;
//     }

//     void DeleteAtHead()
//     {
//         if (head == NULL)
//         {
//             return;
//         }
//         node<T> *a = head;
//         node<T> *b = head->nxt;
//         delete a;

//         if (b != NULL)
//         {
//             b->prv = NULL;
//         }
//         head = b;
//         sz--;
//     }

//     int getSize()
//     {
//         return sz;
//     }
// };

// template <class T>
// class Stack
// {
// public:
//     DoublyLinkedList<T> dl;

//     Stack()
//     {
//     }

//     T Top()
//     {
//         if (dl.getSize() == 0)
//         {
//             cout << "Stack is empty. Nothing can be shown.\n";
//             T a;
//             return a;
//         }
//         return dl.head->data;
//     }

//     void Push(T value)
//     {
//         dl.InsertAtHead(value);
//     }

//     void POP()
//     {
//         if (dl.getSize() == 0)
//         {
//             cout << "Stack is empty. Nothing can be POP.\n";
//             return;
//         }
//         dl.DeleteAtHead();
//     }
// };

// int main()
// {
//     Stack<double> st;
//     st.Push(3.5);
//     st.Push(4.5);
//     st.Push(5.5);
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();
//     cout << st.Top() << "\n";
//     st.POP();

//     return 0;
// }


// Reverse a STACK USING another stack with Doubly Linked List
#include <bits/stdc++.h>
using namespace std;

template <class T>
class node
{
public:
    T data;
    node *nxt;
    node *prv;
};

template <class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    node<T> *CreateNewNode(T data)
    {
        node<T> *newNode = new node<T>;
        newNode->data = data;
        newNode->nxt = NULL;
        newNode->prv = NULL;

        return newNode;
    }

    void InsertAtHead(T data)
    {

        node<T> *newNode = CreateNewNode(data);
        sz++;
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        node<T> *a = head;
        newNode->nxt = a;
        a->prv = newNode;
        head = newNode;
    }

    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->nxt;
        delete a;

        if (b != NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }

    void Traverse()
    {
        node<T> *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    int getSize()
    {
        return sz;
    }
};

template <class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;

    Stack()
    {
    }

    T Top()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty. Nothing can be shown.\n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    void Push(T value)
    {
        dl.InsertAtHead(value);
    }

    void POP()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty. Nothing can be POP.\n";
            return;
        }
        dl.DeleteAtHead();
    }

    int getSize()
    {
        return dl.getSize();
    }

    void PrintStack()
    {
        dl.Traverse();
    }
};

int main()
{
    // Stack<int> a;
    // Stack<int> temp;
    // a.Push(4);
    // a.Push(6);
    // a.Push(3);
    // a.Push(7);
    // a.PrintStack();

    // while (a.getSize()>0)
    // {
    //     temp.Push(a.Top());
    //     a.POP();
    // }
    // swap(a,temp);
    // a.PrintStack();

    Stack<int> st;
    st.Push(5);
    st.Push(2);
    st.Push(7);
    st.Push(8);
    st.Push(3);
    st.PrintStack();
    Stack<int> tmp;
    while (st.getSize() > 0)
    {
        /* code */
        int t = st.Top();
        st.POP();
        while (tmp.getSize() > 0)
        {
            /* code */
            if (tmp.Top() < t)
            {
                /* code */
                break;
            }
            st.Push(tmp.Top());
            tmp.POP();
        }
        tmp.Push(t);
    }
    swap(st,tmp);
    st.PrintStack();
    cout<<st.Top();

    return 0;
}