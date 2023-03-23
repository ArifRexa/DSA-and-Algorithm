// // Queue using Static  array
// #include<bits/stdc++.h>
// using namespace std;
// const int MAX_SIZE  = 500;

// class Queue{
//     public:
//     int a[MAX_SIZE];
//     int l,r;

//     Queue(){
//         l = 0;
//         r = -1;
//     }
// //O(1)
//     void Enqueue(int value){
//         if (r+1 >= MAX_SIZE)
//         {
//             cout<<"Queue is full\n";
//             return;
//         }
//         r++;
//         a[r] = value;
//     }
// //O(1)
//     void Dequeue(){
//         if (l>r)
//         {
//             cout<<"Queue is empty. Nothing to dequeue.\n";
//             return;
//         }
//         l++;
//     }
// //O(1)
//     int Front(){
//         if (l>r)
//         {
//             cout<<"Queue is empty. Nothing to show.\n";
//             return -1;
//         }
//         return a[l];
//     }
// //O(1)
//     int Size(){
//         return r-l+1;
//     }
// };
// int main()
// {
//     Queue q;
//     q.Enqueue(5);
//     q.Enqueue(6);
//     q.Enqueue(7);

//     cout<<q.Front()<<"\n";
//     q.Dequeue();
//     cout<<q.Front()<<"\n";
//     q.Dequeue();
//     cout<<q.Front()<<"\n";
//     q.Dequeue();
//     cout<<q.Front()<<"\n";
//     q.Dequeue();

//     return 0;
// }




// // Queue using circuler array
// #include<bits/stdc++.h>
// using namespace std;
// const int MAX_SIZE  = 500;

// class Queue{
//     public:
//     int a[MAX_SIZE];
//     int l,r, sz;

//     Queue(){
//         l = 0;
//         r = -1;
//         sz = 0;
//     }
// //O(1)
//     void Enqueue(int value){
//         if (sz == MAX_SIZE)
//         {
//             cout<<"Queue is full. Can't Enqueue.\n";
//             return;
//         }
//         r++;
//         if (r == MAX_SIZE)
//         {
//             r = 0;
//         }
//         a[r] = value;
//         sz++;
//     }
// //O(1)
//     void Dequeue(){
//         if (sz==0)
//         {
//             cout<<"Queue is empty. Nothing to dequeue.\n";
//             return;
//         }
//         l++;
//         if (l == MAX_SIZE)
//         {
//             l = 0;
//         }
//         sz--;
//     }
// //O(1)
//     int Front(){
//         if (sz == 0)
//         {
//             cout<<"Queue is empty. Nothing to show.\n";
//             return -1;
//         }
//         return a[l];
//     }
// //O(1)
//     int Size(){
//         return sz;
//     }
// };
// int main()
// {
//     Queue q;
//     q.Enqueue(5);
//     q.Enqueue(6);
//     q.Enqueue(7);

//     cout<<q.Front()<<"\n";
//     q.Dequeue();
//     cout<<q.Front()<<"\n";
//     q.Dequeue();
//     cout<<q.Front()<<"\n";
//     q.Dequeue();
//     cout<<q.Front()<<"\n";
//     q.Dequeue();

//     return 0;
// }



// // Queue using dynamic circuler array
// #include<bits/stdc++.h>
// using namespace std;

// class Queue{
//     public:
//     int *a;
//     int l,r, sz, array_capacity;

//     Queue(){
//         a  = new int[1];
//         array_capacity = 1;
//         l = 0;
//         r = -1;
//         sz = 0;
//     }

//     void RemoveCirculer(){
//         if (l>r)
//         {
//             int *temp = new int[array_capacity];
//             int idx = 0;
//             for (int i = l; i < array_capacity; i++)
//             {
//                 temp[idx] = a[i];
//                 idx++;
//             }
//             for (int i = 0; i <= r; i++)
//             {
//                 temp[idx] = a[i];
//                 idx++;
//             }
//             swap(temp, a);
//             l = 0;
//             r = array_capacity-1;
//             delete []temp;
//         }
//     }

//     void IncreaseSize(){
//         RemoveCirculer();
//         int *temp = new int[array_capacity*2];
//         for (int i = 0; i < array_capacity; i++)
//         {
//             temp[i] = a[i];
//         }
//         swap(a, temp);
//         array_capacity = array_capacity*2;
//         delete []temp;

//     }
// //O(1)
//     void Enqueue(int value){
//         if (sz == array_capacity)
//         {
//             IncreaseSize();
//         }
//         r++;
//         if (r == array_capacity)
//         {
//             r = 0;
//         }
//         a[r] = value;
//         sz++;
//     }
// //O(1)
//     void Dequeue(){
//         if (sz==0)
//         {
//             cout<<"Queue is empty. Nothing to dequeue.\n";
//             return;
//         }
//         l++;
//         if (l == array_capacity)
//         {
//             l = 0;
//         }
//         sz--;
//     }
// //O(1)
//     int Front(){
//         if (sz == 0)
//         {
//             cout<<"Queue is empty. Nothing to show.\n";
//             return -1;
//         }
//         return a[l];
//     }
// //O(1)
//     int Size(){
//         return sz;
//     }
// };
// int main()
// {
//     Queue q;
//     q.Enqueue(5);
//     q.Enqueue(6);
//     q.Enqueue(7);

//     cout<<q.Front()<<"\n";
//     q.Dequeue();
//     cout<<q.Front()<<"\n";
//     q.Dequeue();
//     cout<<q.Front()<<"\n";
//     q.Dequeue();
//     cout<<q.Front()<<"\n";
//     q.Dequeue();

//     return 0;
// }



// // Queue using Linked List
// #include <bits/stdc++.h>
// using namespace std;

// class node{
// public:
//     int data;
//     node* nxt;
// };

// class Queue{
// public:
//     node* head;
//     node* tail;
//     int sz;

//     Queue()
//     {
//         head = NULL;
//         tail = NULL;
//         sz = 0;
//     }
//     node * CreateNode(int value)
//     {
//         node* newnode = new node;
//         newnode->data = value;
//         newnode->nxt = NULL;
//         return newnode;
//     }
//     void enqueue(int value)
//     {
//         sz++;
//         node* newnode = CreateNode(value);
//         if(head == NULL)
//         {
//             head = newnode;
//             tail = newnode;
//             return;
//         }
//         tail->nxt = newnode;
//         tail = newnode;
//     }

//     void dequeue()
//     {
//         if(sz==0)
//         {
//             cout<<"Queue is empty\n";
//             return;
//         }
//         if(sz==1)
//         {
//             delete head;
//             head = NULL;
//             tail = NULL;
//             sz--;
//             return;
//         }
//         node* a = head;
//         head = head->nxt;
//         sz--;
//         delete a;
//     }

//     int front()
//     {
//         if(sz==0)
//         {
//             cout<<"Queue is empty\n";
//             return -1;
//         }
//         return head->data;
//     }

//     int size()
//     {
//         return sz;
//     }
// };

// int main()
// {
//     Queue q;
//     q.enqueue(5);
//     q.enqueue(10);
//     q.enqueue(15);

//     cout<<"Q size : "<<q.size()<<"\n";
//     cout<<q.front()<<"\n";
//     q.dequeue();

//     cout<<q.front()<<"\n";
//     q.dequeue();

//     cout<<q.front()<<"\n";
//     q.dequeue();

//     cout<<"Q size : "<<q.size()<<"\n";

//     return 0;
// }


//Queue using STL
#include <bits/stdc++.h>
using namespace std;


int main()
{
    queue<int> q;
    //enqueue O(1)
    q.push(5);
    q.push(10);
    q.push(15);

    //size O(1)
    cout<<"Queue size : "<<q.size()<<"\n";
    //empty O(1)
    cout<<q.empty()<<"\n";

    //front O(1)
    cout<<q.front()<<"\n";

    //dequeue O(1)
    q.pop();

    cout<<q.front()<<"\n";
    q.pop();

    cout<<q.front()<<"\n";
    q.pop();

    cout<<q.empty()<<"\n";

    queue<char>q2;
    q2.push('a');
    q2.push('b');
    q2.push('c');

    cout<<q2.front()<<"\n";

    q2.pop();

    cout<<q2.front()<<"\n";
    q2.pop();

    cout<<q2.front()<<"\n";
    q2.pop();
    return 0;
}
