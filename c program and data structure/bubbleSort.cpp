#include <bits/stdc++.h>
using namespace std;

/*
Exact Bubble sort in theoryExam1.cpp file.

Time Complexity ===> O(n2)

|=============================================|
|   Case	      |      Time Complexity      |
|=================|===========================|
|   Best Case     |         O(n)              |
|-----------------|---------------------------|
|   Average Case  |         O(n2)             |
|-----------------|---------------------------|
|   Worst Case    |         O(n2)             |
|=============================================|

Space Complexity ===> O(1)
*/

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
                // swap(arr[j], arr[i]);
            
        }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

/*
7
5 1 9 8 11 3 7
*/