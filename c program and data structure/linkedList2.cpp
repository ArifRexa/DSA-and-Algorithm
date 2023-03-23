#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * nxt;
};

class LinkedList{
    public:
    node * head;
    int sz=0;
    LinkedList(){
        head=NULL;
    }
    node * createNewNode(int value){
        node * newNode= new node;
        newNode->data=value;
        newNode->nxt=NULL;
        return newNode;
    }
    // Insert new value at head
    void InsertAtHead(int value){
        node *a= createNewNode(value);
        sz++;
        if(head==NULL){
            head=a;
            return;
        }
        a->nxt=head;
        head=a;
    }
    
    // Print the LinkedList
    void Traverse(){
        node * a= head;
        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }
    
    // Search for a distinct value
    int SearchDistinctValue(int value){
        node * a= head;
        int index = 0;
        while(a!=NULL){
            if(a->data==value){
                return index;
            }
            a=a->nxt;
            index++;
        }
        return -1;
    }
    
    // Search for all possible occurance index
    int SearchAllValue(int value){
        node* a=head;
        int index=0;
        while(a!=NULL){
            if(a->data==value){
            cout<<index<<"  ";
        }
        a=a->nxt;
        index++;
        }
        return -1;
    }
    
    // To find the LinkedList length
    int getSize(){
        // this code is O(n)
        // node *a=head;
        // int sz=0;
        // while(a!=NULL){
        //     sz++;
        //     a=a->nxt;
        // }
        
        // without above code the complexity is O(1)
        return sz;
        
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
        node *newNode=createNewNode(value);
        newNode->nxt=a->nxt;
        a->nxt=newNode;
        return 0;
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
        node *newNode = createNewNode(data);
        newNode->nxt = a->nxt;
        a->nxt= newNode;
    }
    
    // Print the LinkedList value in reverse order using recursion
    void printReverseDriver(node *a){
        if(a==NULL) return;
        
        printReverseDriver(a->nxt);
        cout<<a->data<<" ";
    }
    void printReverse(){
        printReverseDriver(head);
    }
    
};

int main()
{
    // cout<<"Hello World";
    LinkedList l;
    l.InsertAtHead(10);
    // l.Traverse();    
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.InsertAtHead(40);
    l.InsertAtHead(10);

    l.InsertAtHead(50);
    l.InsertAtHead(10);
    l.InsertAtHead(30);
    cout<<"All elements in this LinkedList: ";
    l.Traverse();
    cout<<'\n';
    
    
    cout<<"The length of this LinkedList: ";
    cout<<l.getSize()<<"\n";
    cout<<'\n';
    
    
    cout<<"The index for 50: ";
    cout<<l.SearchDistinctValue(50)<<"\n";
    cout<<'\n';
    
    
    cout<<"The all index for 10: ";
    l.SearchAllValue(10);
    cout<<'\n';
    cout<<"\n";
    
    
    cout<<"Insert the value at index 2 for 25: ";
    l.InsertAtAnyPoint(2,25);
    l.Traverse();
    cout<<'\n';
    
    
    cout<<"The length of this LinkedList: ";
    cout<<l.getSize()<<"\n";
    
    
    // l.Traverse();
    // cout<<l.getSize()<<"\n";
    cout<<'\n';
    cout<<"Delete at head: ";
    l.DeleteAtHead();
    l.Traverse();
    cout<<'\n';
    
    
    cout<<"Now the updated size is: "<<l.getSize()<<"\n";
    cout<<'\n';
    
    
    cout<<"Delete at 2 index: ";
    l.DeleteAtAnyPoint(2);
    l.Traverse();
    cout<<'\n';
    
    
    cout<<"Now the updated size is: "<<l.getSize()<<"\n\n";
    
    cout<<"The current LinkedList is: ";
    l.Traverse();
    cout<<"\nInsert a data after a specific value: ";
    l.InsertAfterValue(40,65);
    l.Traverse();
    cout<<"\nReverse Printing the value: ";
    
    l.printReverse();
    cout<<"\n\nThe main LinkedList doesn't change: ";
    l.Traverse();

    return 0;
}
