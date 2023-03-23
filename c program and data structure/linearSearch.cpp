#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity ===> O(n)

|=============================================|
|   Case	      |      Time Complexity      |
|=================|===========================|
|   Best Case     |         O(1)              |
|-----------------|---------------------------|
|   Average Case  |         O(n)              |
|-----------------|---------------------------|
|   Worst Case    |         O(n)              |
|=============================================|

Space Complexity ===> O(1)
*/
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool flag = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == k)
        {
            cout << "YES " << i << "\n";
            flag = 1;
            // break; //if need only one occurance.
        }

    if (flag == 0) cout << "NO\n";
    
}

/*

5 4
1 2 3 4 5

5 2
1 2 3 4 2

5 7
1 2 3 4 5


*/