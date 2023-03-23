#include <bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node *nxt;
};

class LinkeList{
public:
  node *head;
  int sz=0;
  LinkeList(){
    head = NULL;
  }

  // Creates a new node with data = value and nxt = NULL
  node *CreateNewNode(int value){
    node *newnode = new node;
    newnode->data = value;
    newnode->nxt = NULL;
    return newnode;
  }

  // Insert new value at Head
  void InsertAtHead(int value){
    node *a = CreateNewNode(value);
    sz++;
    if (head == NULL){
      head = a;
      return;
    }
    // If head is not NULL
    a->nxt = head;
    head = a;
  }

  // To insert at any index
  int InsertAtAnyPoint(int idx, int value){
    if(idx<0||idx>sz){
      return 0;
    }
    node *a= head;
    if(idx==0){
      InsertAtHead(value);
      return 0;
    }
    sz++;
    int current_index=0;
    while(current_index!=idx-1){
      a=a->nxt;
      current_index++;
    }
    node *newNode=CreateNewNode(value);
    newNode->nxt=a->nxt;
    a->nxt=newNode;
    return 0;
  }

  // Insert a data after a value
  void InsertAfterValue(int value, int data){
    node* a=head;
    while(a!=NULL){
      if(a->data==value){
        break;
      }
      a=a->nxt;
    }
    if(a==NULL){
      cout<<value<<" doesn't exist in this LinkedList";
      return;
    }
    node *newNode = CreateNewNode(data);
    newNode->nxt = a->nxt;
    a->nxt= newNode;
    sz++;
  }

  // Prints the linked list
  void Traverse(){
    node *a = head;
    while (a != NULL){
      cout << a->data << " ";
      a = a->nxt;
    }
    cout << "\n";
  }

  // Search for a single value
  int SearchDistinctValue(int value){
    node *a = head;
    int index = 0;
    while (a != NULL){
      if (a->data == value){
        return index;
      }
      a = a->nxt;
      index++;
    }
    return -1;
  }

  // Search all possible occurrence
  int SearchAllValue(int value){
    node *a = head;
    int index = 0;
    while (a != NULL){
      if (a->data == value){
        cout << value << " is found at index " << index << "\n";
      }
      a = a->nxt;
      index++;
    }
    return -1;
  }

  // Find the size of linked list
  int getSize(){
    return sz;
  }

  // Find a value in given index
  int getValue(int idx){
    node *a = head;
    int index = 0;
    while (a != NULL){
      if (index == idx){
        return a->data;
      }
      index++;
      a = a->nxt;
    }
    return -1;
  }

  // Print the LinkedList value in reverse order using recursion
  void printReverse(){
    printReverseRecursive(head);
  }
  void printReverseRecursive(node *n){
    if (n){
      printReverseRecursive(n->nxt);
      cout << n->data << " ";
    }
  }

  // Swapping two values in given index
  void swapNodeValues(int node1, int node2){
    // 1. count the number of nodes in the list
    node *temp = head;
    int N = 0;
    while (temp != NULL){
      N++;
      temp = temp->nxt;
    }
    // 2. check if the swap positions are valid entries
    if (node1 < 1 || node1 > N || node2 < 1 || node2 > N)
      return;
    // 3. traverse to the nodes where values to be swapped
    node *pos1 = head;
    node *pos2 = head;
    for (int i = 1; i < node1; i++)
      pos1 = pos1->nxt;
    for (int i = 1; i < node2; i++)
      pos2 = pos2->nxt;
    // 4. swap the values of two nodes
    int val = pos1->data;
    pos1->data = pos2->data;
    pos2->data = val;
  }

  // delete at head
  void DeleteAtHead(){
    if(head==NULL){
      return ;
    }
    sz--;
    node*a= head;
    head=a->nxt;
    delete a;
  }

  // Delete at any index
  void DeleteAtAnyPoint(int idx){
    if(idx<0||idx>sz-1){
      return;
    }
    if(idx==0){
      DeleteAtHead();
      return;
    }
    node *a=head;
    int current_index=0;
    while(current_index!=idx-1){
      a=a->nxt;
      current_index++;
    }
    sz--;
    node *b=a->nxt;
    a->nxt=b->nxt;
    delete b;
  }
    
};

int main(){
  LinkeList l;

  l.InsertAtHead(30);
  l.InsertAtHead(30);
  l.InsertAtHead(10);
  l.Traverse();
  
  cout << "10 is found at " << l.SearchDistinctValue(10) << "\n";
  cout << "5 is found at " << l.SearchDistinctValue(5) << "\n";
  l.SearchAllValue(30);
  cout << l.getSize() << "\n";
  cout << l.getValue(5) << "\n";
  l.printReverse();
  cout << "\n";
  l.Traverse();
  l.swapNodeValues(1, 2);
  l.Traverse();
  l.InsertAfterValue(10,5);
  l.Traverse();
  cout<<l.getSize();

  return 0;
}