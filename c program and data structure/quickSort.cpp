// #include <bits/stdc++.h>
// using namespace std;
// /*
// Time Complexity     ===>    O(nlogn)

// |=============================================|
// |   Case	         |      Time Complexity      |
// |=================|===========================|
// |   Best Case     |         O(nlogn)          |
// |-----------------|---------------------------|
// |   Average Case  |         O(nlogn)          |
// |-----------------|---------------------------|
// |   Worst Case    |         O(n2)             |
// |=============================================|

// Space Complexity    ===>    O(logn)
// */
// vector<int> quickSort(vector<int> &a)
// {
//     if (a.size() <= 1)
//         return a;

//     // int pivot = a.size() - 1;
//     int pivot = rand() % (a.size());
//     vector<int> b, c;
//     for (int i = 0; i < a.size(); i++)
//     {
//         if (i == pivot)
//             continue;

//         (a[i] <= a[pivot]) ? b.push_back(a[i]) : c.push_back(a[i]);
//     }
//     vector<int> sorted_b = quickSort(b);
//     vector<int> sorted_c = quickSort(c);
//     vector<int> sorted_a;
//     for (int i = 0; i < sorted_b.size(); i++)
//         sorted_a.push_back(sorted_b[i]);

//     sorted_a.push_back(a[pivot]);

//     for (int i = 0; i < sorted_c.size(); i++)
//         sorted_a.push_back(sorted_c[i]);

//     return sorted_a;
// }
// int main()
// {
//     // vector<int> a = {5, 2, 3, 5, 4, 1};
//     vector<int> a = {5, 3, 7, 1, 8, 9};
//     vector<int> ans = quickSort(a);
//     for (int i = 0; i < ans.size(); i++)
//         cout << ans[i] << " ";

//     return 0;
// }





// ================================================================
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> quickSort(vector<int> &a)
// {
//     if (a.size() <= 1)
//         return a;
//     int pivot = rand() % (a.size());
//     vector<int> b, c;
//     for (int i = 0; i < a.size(); i++)
//     {
//         if (i == pivot)
//             continue;

//         (a[i] >= a[pivot]) ? b.push_back(a[i]) : c.push_back(a[i]);
//     }
//     vector<int> sorted_b = quickSort(b);
//     vector<int> sorted_c = quickSort(c);
//     vector<int> sorted_a;
//     for (int i = 0; i < sorted_b.size(); i++)
//         sorted_a.push_back(sorted_b[i]);

//     sorted_a.push_back(a[pivot]);

//     for (int i = 0; i < sorted_c.size(); i++)
//         sorted_a.push_back(sorted_c[i]);

//     return sorted_a;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for (int i = 0; i < n; i++)
//         cin>>a[i];
//     vector<int> ans = quickSort(a);
//     for (int i = 0; i < ans.size(); i++)
//         cout << ans[i] << " ";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<int> quickSort(vector<int> &a){
    if (a.size() <= 1)
        return a;
    int pivot = rand() % (a.size());
    vector<int> b, c;
    for (int i = 0; i < a.size(); i++){
        if (i == pivot)
            continue;

        (a[i] >= a[pivot]) ? b.push_back(a[i]) : c.push_back(a[i]);
    }
    vector<int> sorted_b = quickSort(b);
    vector<int> sorted_c = quickSort(c);
    vector<int> sorted_a;
    for (int i = 0; i < sorted_b.size(); i++)
        sorted_a.push_back(sorted_b[i]);

    sorted_a.push_back(a[pivot]);

    for (int i = 0; i < sorted_c.size(); i++)
        sorted_a.push_back(sorted_c[i]);

    return sorted_a;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin>>a[i];
    vector<int> ans = quickSort(a);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}



