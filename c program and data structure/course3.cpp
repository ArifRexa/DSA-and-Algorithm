// =======================================================Module 5.5: Practice Day 01=======================================
// 01
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, sum=0,a[1000];
//     cin>>n;
//     for(int i=0; i<n;i++){
//         cin>>a[i];
//         sum+=a[i];
//     }
//     cout<<sum<<"\n";
//     return 0;
// }

// 02

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, mult = 1, a[1000];
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         if (i % 2 != 0)
//         {
//             mult *= a[i];
//         }
//     }
//     cout << mult << "\n";
//     return 0;
// }

// 03

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string a;
//     getline(cin, a);
//     for (int i = 0; i < a.length(); i++)
//     {
//         if (i == 0 || i % 2 == 0)
//         {
//             if (a[i] == 'z') cout <<(char) (a[i] - 25);
//             else cout <<(char) (a[i] + 1);
//         }
//         else cout<<a[i];
//     }
//     return 0;
// }

// 04

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m, arr1[1000], arr2[1000];
//     cin >> n;
//     for (int i = 0; i < n; i++)
//         cin >> arr1[i];

//     cin >> m;
//     for (int i = 0; i < m; i++)
//         cin >> arr2[i];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//             if (arr1[i] == arr2[j])
//                 cout << arr1[i] << " ";
//     }

//     return 0;
// }

// 05

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, arr1[1000], arr2[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    for (int i = 0; i < n; i++)
        cout << arr1[i]<<" ";

    for (int j = 0; j < m; j++)
    {
        int flag = 0;
        for (int i = 0; i < n; i++)
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        if (flag != 1)
            cout << arr2[j] << " ";
    }
    return 0;
}