#include <bits/stdc++.h>
using namespace std;

void print(list<int> l)
{
    // list<int>::iterator a = l.begin();
    auto a = l.begin();
    while (a != l.end())
    {
        cout << *a << " ";
        a++;
    }
    cout << " ";
}

void Insert(list<int> &l, int idx, int value){
    auto it = l.begin();
    advance(it, idx);
    l.insert(it, value);
}

void Delete(list<int> &l, int idx){
    auto it = l.begin();
    advance(it, idx);
    l.erase(it);
}
int main()
{
    list<int> l;
    // Push front O(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    print(l);
    cout<<"\n";

    //Push back O(1)
    l.push_back(3);
    l.push_back(2);
    l.push_back(1);
    print(l);
    cout<<"\n";

    // pop_back O(1)
    l.pop_back();
    print(l);
    cout<<"\n";

    // pop_front O(1)
    l.pop_front();
    print(l);
    cout<<"\n";

    // insert at any position
    Insert(l,3, 100);
    print(l);
    cout<<"\n";
    Delete(l,3);
    print(l);
    cout<<"\n";
    cout<<l.size()<<endl;
    return 0;
}