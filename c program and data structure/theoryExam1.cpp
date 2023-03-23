#include <bits/stdc++.h>
using namespace std;
/*
Bubble Sort
*/
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++)
    {
        // cout << i + 1 << " iteration:"<< "\n";
        bool flag = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            // cout << "step-" << j + 1 << ": ";
            // for (int i = 0; i < n; i++)
            //     cout << arr[i] << " ";
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }

            // cout << "  =>  ";
            // for (int i = 0; i < n; i++)
            //     cout << arr[i] << " ";
            // cout << "\n";
        }
        if (flag)
        {
            break;
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    return 0;
}

/*
7
3 5 1 4 2 6 1

6
7 2 13 2 11 4
*/

/*

5
1 2 3 1 2
*/
