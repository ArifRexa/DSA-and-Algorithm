/*
WAP that takes n integer numbers, and counts the number of inversions in the array using divide and conquer algorithm in O(nlogn). Two elements a[i] and a[j] form an inversion if i < j and a[i] > a[j].

Sample input
Sample output
4
6 1 3 2
4
6
5 6 7 8 0 1
8

  In sample 1, the inversions are
  Index (0,1) -> (6,1) because 0<1 and 6>1.
  Index (0,2) -> (6,3) because 0<2 and 6>3.
  Index (0,3) -> (6,2) because 0<3 and 6>2.
  Index (2,3) -> (3,2) because 2<3 and 3>2.
  Total 4 inversions.

Note: If you are unable to solve the 3rd problem here’s a link to help you. But first please try hard on your own and think about what you can do. How to divide the problem and how to calculate inversion for the current array.

https://www.interviewbit.com/blog/count-inversions-of-an-array/  Look approach 2.
*/
// #include <bits/stdc++.h>
// using namespace std;

// int getInversions(vector<int>A) {
//   int count = 0;
//   for (int i = 0; i < A.size(); ++i) {
//     for (int j = i + 1; j < A.size(); ++j) {
//       if (A[i] > A[j]) {
//         ++count;
//       }
//     }
//   }
//   return count;
// }

// int main() {
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++)
//         cin>>arr[i];

//     cout<<getInversions(arr);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> merge_sort(vector<int> a)
// {
//   // base case
//   if (a.size() <= 1)
//     return a;

//   int mid = a.size() / 2;
//   vector<int> b, c;
//   for (int i = 0; i < mid; i++)
//     b.push_back(a[i]);

//   for (int i = mid; i < a.size(); i++)
//     c.push_back(a[i]);

//   vector<int> sorted_b = merge_sort(b);
//   vector<int> sorted_c = merge_sort(c);

//   vector<int> sorted_a;
//   int idx1 = 0, idx2 = 0;

//   for (int i = 0; i < a.size(); i++)
//   {
//     if (idx1 == sorted_b.size())
//     {
//       sorted_a.push_back(sorted_c[idx2]);
//       idx2++;
//     }
//     else if (idx2 == sorted_c.size())
//     {
//       sorted_a.push_back(sorted_b[idx1]);
//       idx1++;
//     }
//     else if (sorted_b[idx1] < sorted_c[idx2])
//     {
//       sorted_a.push_back(sorted_b[idx1]);
//       idx1++;
//     }
//     else
//     {
//       sorted_a.push_back(sorted_c[idx2]);
//       idx2++;
//     }
//   }
//   return sorted_a;
// }

// int find_sum(vector<int> ans, int n, int k)
// {
//   int l = 0, count = 0, i = 0;
//   int r = n - 1;
//   while (i != n)
//   {
//     if (l < r)
//     {
//       if (ans[l] + ans[r] == k)
//       {
//         count++;
//       }
//       else if (ans[l] + ans[r] < k)
//         l++;
//       else
//       {
//         r--;
//       }
//     }
//     i++;
//   }
//   return count / 2;
// }
// int main()
// {
//   int n, k;
//   cin >> n;

//   vector<int> a(n);
//   for (int i = 0; i < n; i++)
//     cin >> a[i];
//   cin >> k;
//   vector<int> ans = merge_sort(a);
//   cout << find_sum(ans, n, k);
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int binarySearch(vector<int> arr, int k, int searchFirst)
// {
//   int low = 0, high = arr.size() - 1;
//   int result = 0;
//   while (low <= high)
//   {
//     int mid = (low + high) / 2;
//     if (k == arr[mid])
//     {
//       result++;
//       if (searchFirst)
//         high = mid - 1;

//       else
//         low = mid + 1;
//     }
//     else if (k < arr[mid])
//       high = mid - 1;

//     else
//       low = mid + 1;
//   }
//   return result;
// }

// int main()
// {
//   int n, k;
//   cin >> n;
//   vector<int> arr(n);
//   for (int i = 0; i < n; i++)
//     cin >> arr[i];

//   cin >> k;

//   int first = binarySearch(arr, k, 1);
//   int last = binarySearch(arr, k, 0);

//   int count = last + first-1;
//   (count>1)?cout <<"YES":cout <<"NO";

//   return 0;
// }

/*
7
1 3 4 6 6 9 17
6

10
1 2 3 4 5 6 7 8 9 10
5

*/

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int n, p, q;
//   cin >> n;
//   vector<int> arr(n);
//   for (int i = 0; i < n; i++)
//     cin >> arr[i];
//   cin >> p >> q;

//   arr.erase(arr.begin() + p - 1, arr.begin() + q);

//   for (int i = 0; i < arr.size(); i++)
//     cout << arr[i]<<" ";

//   return 0;
// }

/*
6
1 4 6 2 8 7
2 4


*/

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> even_generator(vector<int>a){
//   vector<int> even_nums;
//   for (int i = 0; i < a.size(); i++)
//     if (a[i]%2==0)
//       even_nums.push_back(a[i]);

//   return even_nums;
// }

// int main(){
//     vector<int>a={1,2,3,4,6};
//     vector<int>ans=even_generator(a);
//     for (int i = 0; i < ans.size(); i++)
//       cout<<ans[i]<<" ";
//     return 0;
// }

// ===================================================================================

// #include <bits/stdc++.h>
// using namespace std;

// class node
// {
// public:
//   int data;
//   node *nxt;
// };

// class LinkeList
// {
// public:
//   node *head;

//   LinkeList()
//   {
//     head = NULL;
//   }

//   node *CreateNewNode(int value)
//   {
//     node *newnode = new node;
//     newnode->data = value;
//     newnode->nxt = NULL;
//     return newnode;
//   }

//   // Insert new value at Head
//   void InsertAtHead(int value)
//   {
//     node *a = CreateNewNode(value);
//     if (head == NULL)
//     {
//       head = a;
//       return;
//     }
//     // If head is not NULL
//     a->nxt = head;
//     head = a;
//   }

//   // Prints the linked list
//   void Traverse()
//   {
//     node *a = head;
//     while (a != NULL)
//     {
//       cout << a->data << " ";
//       a = a->nxt;
//     }
//     cout << "\n";
//   }

//   // Search for a single value
//   int SearchDistinctValue(int value)
//   {
//     node *a = head;
//     int index = 0;
//     while (a != NULL)
//     {
//       if (a->data == value)
//       {
//         return index;
//       }
//       a = a->nxt;
//       index++;
//     }
//     return -1;
//   }

//   // Search all possible occurrence
//   int SearchAllValue(int value)
//   {
//     node *a = head;
//     int index = 0;
//     while (a != NULL)
//     {
//       if (a->data == value)
//       {
//         cout << value << " is found at index " << index << "\n";
//       }
//       a = a->nxt;
//       index++;
//     }
//     return -1;
//   }

//   int getSize()
//   {
//     int count = 0;
//     node *current = head;
//     while (current != NULL)
//     {
//       count++;
//       current = current->nxt;
//     }
//     return count;
//   }

//   int getValue(int idx)
//   {
//     node *a = head;
//     int index = 0;
//     while (a != NULL)
//     {
//       if (index == idx)
//       {
//         return a->data;
//       }
//       index++;
//       a = a->nxt;
//     }
//     return -1;
//   }

//   void printReverse()
//   {
//     printReverseRecursive(head);
//     cout << "\n";
//   }
//   void printReverseRecursive(node *n)
//   {
//     if (n)
//     {
//       printReverseRecursive(n->nxt);
//       cout << n->data << " ";
//     }
//   }

//   void swapFirst()
//   {

//     node *temp = head;
//     int N = 0;
//     while (temp != NULL)
//     {
//       N++;
//       temp = temp->nxt;
//     }

//     if (1 < 1 || 1 > N || 2 < 1 || 2 > N)
//       return;

//     node *pos1 = head;
//     node *pos2 = head;
//     for (int i = 1; i < 1; i++)
//       pos1 = pos1->nxt;

//     for (int i = 1; i < 2; i++)
//       pos2 = pos2->nxt;

//     int val = pos1->data;
//     pos1->data = pos2->data;
//     pos2->data = val;
//   }
// };

// int main()
// {
//   LinkeList l;

//   cout << l.getSize() << "\n";
//   l.InsertAtHead(5);
//   cout << l.getSize() << "\n";
//   l.InsertAtHead(6);
//   l.InsertAtHead(30);
//   cout << l.getSize() << "\n";
//   l.InsertAtHead(20);
//   l.InsertAtHead(30);
//   cout << l.getValue(2) << "\n";
//   cout << l.getValue(6) << "\n";
//   l.printReverse();
//   l.Traverse();
//   l.swapFirst();
//   l.Traverse();
//   l.printReverse();

//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v(1);
//     v[0] = 9;
//     v.resize(9);
//     cout << v.back() << '\n';
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// class node
// {
// public:
//   int data;
//   node *nxt;
//   node *prv;
// };

// class DoublyLinkedList
// {
// public:
//   node *head;
//   int sz;
//   DoublyLinkedList()
//   {
//     head = NULL;
//     sz = 0;
//   }

//   // Creates a new node with the given data and returns it O(1)
//   node *CreateNewNode(int data)
//   {
//     node *newnode = new node;
//     newnode->data = data;
//     newnode->nxt = NULL;
//     newnode->prv = NULL;
//     return newnode;
//   }

//   // Inserts a node with given data at head O(1)
//   void InsertAtHead(int data)
//   {
//     sz++;
//     node *newnode = CreateNewNode(data);
//     if (head == NULL)
//     {
//       head = newnode;
//       return;
//     }
//     node *a = head;
//     newnode->nxt = a;
//     a->prv = newnode;
//     head = newnode;
//   }

//   // Prints the linked list O(n)
//   void Traverse()
//   {
//     node *a = head;
//     while (a != NULL)
//     {
//       cout << a->data << " ";
//       a = a->nxt;
//     }
//     cout << "\n";
//   }

//   // Returns the size of linked list O(1)
//   int getSize()
//   {
//     return sz;
//   }

//   void swapp(int i, int j)
//   {
//     node *a = head;
//     int index1 = 0;
//     while (index1 != i )
//     {
//       a = a->nxt;
//       index1++;
//     }
//     node *b = head;
//     int index2 = 0;
//     while (index2 != j )
//     {
//       b = b->nxt;
//       index2++;
//     }
//     swap(a->data,b->data);
//     cout << "\n";
//   }

//   void deleteZero()
//   {
//     node *a = head;
//     if (a->data == 0)
//     {
//       node *x = a;
//       a = a->nxt;
//       head = a;
//       delete x;
//       sz--;
//     }
//     while (a != NULL)
//     {

//       if (a->data == 0)

//       {
//         node *b = a->prv;
//         node *c = a->nxt;

//         if (b != NULL)
//         {
//           b->nxt = c;
//         }
//         if (c != NULL)
//         {
//           c->prv = b;
//         }

//         sz--;
//       }
//       a = a->nxt;
//     }
//   }

// };

// int main()
// {
//   DoublyLinkedList dl;
//   dl.InsertAtHead(7);
//   dl.InsertAtHead(0);
//   dl.InsertAtHead(0);
//   dl.InsertAtHead(2);
//   dl.InsertAtHead(0);

//   dl.Traverse();

//   dl.swapp(1, 4);
//   dl.Traverse();
//   dl.deleteZero();
//   dl.Traverse();

//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//   int data;
//   node *nxt;
//   node *prv;
// };

// class DoublyLinkedList
// {
// public:
//   node *head;
//   int sz;
//   DoublyLinkedList()
//   {
//     head = NULL;
//     sz = 0;
//   }

//   // Creates a new node with the given data and returns it O(1)
//   node *CreateNewNode(int data)
//   {
//     node *newnode = new node;
//     newnode->data = data;
//     newnode->nxt = NULL;
//     newnode->prv = NULL;
//     return newnode;
//   }

//   // Inserts a node with given data at head O(1)
//   void InsertAtHead(int data)
//   {
//     sz++;
//     node *newnode = CreateNewNode(data);
//     if (head == NULL)
//     {
//       head = newnode;
//       return;
//     }
//     node *a = head;
//     newnode->nxt = a;
//     a->prv = newnode;
//     head = newnode;
//   }

//   // Inserts the given data at the given index O(n)
//   void Insert(int index, int data)
//   {
//     if (index > sz)
//     {
//       return;
//     }
//     if (index == 0)
//     {
//       InsertAtHead(data);
//       return;
//     }
//     node *a = head;
//     int cur_index = 0;
//     while (cur_index != index - 1)
//     {
//       a = a->nxt;
//       cur_index++;
//     }
//     // a = cur_index - 1
//     node *newnode = CreateNewNode(data);
//     newnode->nxt = a->nxt;
//     newnode->prv = a;
//     node *b = a->nxt;
//     b->prv = newnode;
//     a->nxt = newnode;
//     sz++;
//   }

//   // Deletes the given index O(n)
//   void Delete(int index)
//   {
//     if (index >= sz)
//     {
//       cout << index << " doesn't exist.\n";
//       return;
//     }
//     node *a = head;
//     int cur_index = 0;
//     while (cur_index != index)
//     {
//       a = a->nxt;
//       cur_index++;
//     }
//     node *b = a->prv;
//     node *c = a->nxt;
//     if (b != NULL)
//     {
//       b->nxt = c;
//     }
//     if (c != NULL)
//     {
//       c->prv = b;
//     }
//     delete a;
//     if (index == 0)
//     {
//       head = c;
//     }
//     sz--;
//   }

//   // Prints the linked list O(n)
//   void Traverse()
//   {
//     node *a = head;
//     while (a != NULL)
//     {
//       cout << a->data << " ";
//       a = a->nxt;
//     }
//     cout << "\n";
//   }

//   // Returns the size of linked list O(1)
//   int getSize()
//   {
//     return sz;
//   }

//   // Reverse the doubly linked list O(n)
//   void Reverse()
//   {
//     if (head == NULL)
//     {
//       return;
//     }
//     node *a = head;
//     int cur_index = 0;
//     while (cur_index != sz - 1)
//     {
//       a = a->nxt;
//       cur_index++;
//     }
//     // last index is in a

//     node *b = head;
//     while (b != NULL)
//     {
//       swap(b->nxt, b->prv);
//       b = b->prv;
//     }
//     head = a;
//   }
// // This function will swap the i-th index and j-th index.
//   void swapp(int i, int j)
//   {
//     node *a = head;
//     int index1 = 0;
//     while (index1 != i)
//     {
//       a = a->nxt;
//       index1++;
//     }
//     node *b = head;
//     int index2 = 0;
//     while (index2 != j)
//     {
//       b = b->nxt;
//       index2++;
//     }
//     swap(a->data, b->data);
//     cout << "\n";
//   }

// // This function will delete all the nodes that have data=0.
//   void deleteZero()
//   {
//     node *a = head;
//     if (a->data == 0)
//     {
//       node *x = a;
//       a = a->nxt;
//       head = a;
//       delete x;
//       sz--;
//     }
//     while (a != NULL)
//     {
//       if (a->data == 0)
//       {
//         node *b = a->prv;
//         node *c = a->nxt;

//         if (b != NULL)
//           b->nxt = c;

//         if (c != NULL)
//           c->prv = b;

//         sz--;
//       }
//       a = a->nxt;
//     }
//   }
// };

// int main()
// {
//   DoublyLinkedList dl;
//   dl.InsertAtHead(0);
//   dl.InsertAtHead(10);
//   dl.InsertAtHead(0);
//   dl.InsertAtHead(0);
//   dl.InsertAtHead(5);
//   dl.InsertAtHead(1);
//   dl.InsertAtHead(0);
//   dl.Traverse();
//   dl.Insert(2, 100);
//   dl.Traverse();
//   dl.swapp(1,2);
//   dl.Traverse();
//   dl.deleteZero();
//   dl.Traverse();
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class MaxHeap{
// public:
//     vector<int>nodes;

//     MaxHeap()
//     {

//     }

//     //O(logn)
//     void up_heapify(int idx)
//     {
//         while(idx > 0 && nodes[idx] > nodes[(idx-1)/2])
//         {
//             swap(nodes[idx] , nodes[(idx-1)/2]);
//             idx = (idx-1)/2;
//         }
//     }
//     //O(logn)
//     void insert(int x)
//     {
//         nodes.push_back(x);
//         up_heapify(nodes.size()-1);
//     }

//     //O(n)
//     void PrintHeap()
//     {
//         for(int i=0;i<nodes.size();i++)
//         {
//             cout<<nodes[i]<<" ";
//         }
//         cout<<"\n";
//     }

//     //O(logn)
//     void down_heapify(int idx)
//     {
//         while(1)
//         {
//             int largest = idx;
//             int l = 2*idx + 1;
//             int r = 2*idx + 2;
//             if(l<nodes.size() && nodes[largest] < nodes[l])
//             {
//                 largest = l;
//             }
//             if(r<nodes.size() && nodes[largest] < nodes[r])
//             {
//                 largest = r;
//             }
//             if(largest==idx)
//                 break;
//             swap(nodes[idx] , nodes[largest]);
//             idx = largest;
//         }

//     }

//     //O(logn)
//     void Delete(int idx)
//     {
//         if(idx >= nodes.size())
//             return;
//         swap(nodes[idx] , nodes[nodes.size()-1]);
//         nodes.pop_back();
//         down_heapify(idx);
//     }

//     //O(1)
//     int getMax()
//     {
//         if(nodes.empty())
//         {
//             cout<<"Heap is empty!\n";
//             return -1;
//         }
//         return nodes[0];
//     }

// };
// class MinHeap{
// public:
//     MaxHeap mx;
//     void insert(int x)
//     {
//         mx.insert(-x);
//     }
//     void Delete(int idx)
//     {
//         mx.Delete(idx);
//     }
//     int getMin()
//     {
//         return -mx.getMax();
//     }
// };
// int main()
// {
//   MinHeap mn;
//   mn.insert(50);
//   mn.insert(15);
//   mn.insert(25);
//   mn.insert(35);
//   mn.insert(105);
//   cout<<mn.getMin();
//   mn.Delete(0);
//   cout<<mn.getMin();
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// set<int> setUnion(set<int> a, set<int> b) {
//     set<int> result = a;
//     result.insert(b.begin(), b.end());
//     return result;
// }

// int main() {
//     set<int> a = {1, 2, 3, 4, 5};
//     set<int> b = {4, 5, 6, 7, 8};
//     set<int> result = setUnion(a, b);
//     for (auto it = result.begin(); it != result.end(); it++) {
//         cout << *it << " ";
//     }
//     return 0;
// }

// int main(){
//   int n;
//   cin >> n;

//   map<string, int> indices;
//   for (int i = 0; i < n; i++)
//   {
//     string s;
//     cin >> s;
//     if (indices.count(s))
//       cout << indices[s] << endl;

//     else cout << -1 << endl;

//     indices[s] = i;
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n;
  set<int> A, B, C;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    A.insert(x);
  }
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    B.insert(x);
  }
  set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.begin()));
  for (int x : C)
    cout << x << " ";

  cout << endl;
  return 0;
}
