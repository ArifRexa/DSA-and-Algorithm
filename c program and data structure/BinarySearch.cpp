#include <bits/stdc++.h>
using namespace std;

/*
Time Complexity     ===>    O(logn)

|=============================================|
|   Case	      |      Time Complexity      |
|=================|===========================|
|   Best Case     |         O(1)              |
|-----------------|---------------------------|
|   Average Case  |         O(logn)           |
|-----------------|---------------------------|
|   Worst Case    |         O(logn)           |
|=============================================|

Space Complexity    ===>    O(1)
*/

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0, high = n - 1;
    bool flag = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        cout << "Low = " << low << " High = " << high << " Mid = " << mid << endl;
        if (arr[mid] == k)
        {
            cout << "Yes " << mid << endl;
            flag = 1;
            break;
        }
        else if (arr[mid] < k)
            low = mid + 1;

        else
            high = mid - 1;
    }
    if (flag == 0)
        cout << "NO\n";
}

/*
10 4
2 3 4 4 5 8 10 12 15 19

10 4
2 3 4 5 8 10 12 15 19 21

10 6
2 3 4 5 8 10 12 15 19 21
*/