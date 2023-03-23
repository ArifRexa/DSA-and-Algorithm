// #include<stdio.h>
// int main (){
//     for(int i=1000; i>= 1; i--){
//         for (int j = 0; j < 5; j++){
//             printf("%d\t", i--);
//         }
//         printf("\n", i++);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main (){
//     printf("Hi there /\\. \tI hope you are doing great and practicing well.\nNow this is a simple task you need to do. \t\tJust care for the indentation.\nShow 100%% of sincerity.");
//     return 0;
// }

// #include<stdio.h>
// int main (){
//     int a=10, b=20;
//     printf("%d %d", b,a);
//     return 0;
// }

// #include<stdio.h>
// int main (){
//     int a;
//     scanf("%d", &a);
//     printf("%d", a*2);
//     return 0;
// }

// #include<stdio.h>
// int main (){
//     int a, b;
//     scanf("%d%d", &a, &b);
//     printf("%d %d %d", a+b, a-b, a*b);
//     return 0;
// }

// #include<stdio.h>
// int main (){
//     char a;
//     scanf("%c", &a);
//     printf("%d", a);
//     return 0;
// }

// #include<stdio.h>
// int main (){
//     int a;
//     scanf("%d", &a);
//     printf("%d", a);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int w;
//     char a[100];
//     scanf("%d", &w);
//     for (int i = 0; i < w; i++)
//     {
//         scanf("%s\n", &a);
//         printf("%s", strlen(a));
//     }

//     // scanf("%s", &a);
//     // printf("%s", a);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[20]="Program";
//     char b[20]={'P','r','o','g','r','a','m','\0'};

//     // using the %zu format specifier to print size_t
//     printf("Length of string a = %zu \n",strlen(a));
//     printf("Length of string b = %zu \n",strlen(b));

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter the first number: ");scanf("%d", &a);
//     printf("Enter the second number: ");scanf("%d", &b);
//     if (a > b){
//         (a % b == 0)?printf("The first number is divisible by the second number."):printf("None of them are divisible by the other.");
//     }
//     else if(b > a){
//         (b % a == 0)?printf("The second number is divisible by the first number."):printf("None of them are divisible by the other.");
//     }
//     else if(a==b && a!=0 && b!=0){
//         printf("Both of them are divisible by the other");
//     }
//     else{
//         printf("None of them are divisible by the other.");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b = 0;
//     scanf("%d", &a);
//     for (int i = 1; i <= a; i++){
//         if (a % i == 0){
//             b++;
//         }}
//     (b == 2) ? printf("Prime") : printf("Composite");
//     return 0;
// }

// ===========================MODULE 9.5==============================
// 1

// #include <stdio.h>
// int main()
// {
//     int a, arr[200];
//     scanf("%d", &a);
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = a-1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// 2

// #include <stdio.h>
// int main()
// {
//     int a, arr[200],q, id,v;
//     scanf("%d", &a);
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     scanf("%d", &q);

//     for (int j = 0; j <q ; j++)
//     {
//         scanf("%d %d", &id,&v);
//         arr[id]= arr[id]+v;
//     }
//     for (int i = 0; i < a; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// 3

// #include <stdio.h>
// int main()
// {
//     int a, arr[200],p=1;
//     scanf("%d", &a);
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < a-1; i++)
//     {
//         if (arr[i]==arr[i+1])
//         p++;
//     }
//     (p==a)?printf("YES"):printf("NO");

//     return 0;
// }

// 4

// #include <stdio.h>
// int main()
// {
//     int a, arr[200];
//     scanf("%d", &a);
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < a; i++)
//     {
//         printf("%d - ", arr[i]);
//         for (int j = 0; j < a; j++)
//         {
//             if (j != i)
//             {
//                 printf("%d ", arr[j]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 5
// #include <stdio.h>
// int main()
// {
//     int a, arr[200],t, c=0;
//     scanf("%d", &a);
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &t);
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < a; j++)
//         {
//             if (j!=i && arr[j]+arr[j+1]==t)
//             {
//                 c++;
//                 break;
//             }
//         }
//     }
//     (c>0)?printf("YES"):printf("NO");
//     return 0;
// }

// 6
// #include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");

//     }
//     return 0;
// }

// ===========================MODULE 10.5==============================

// 1

// #include <stdio.h>
// int main()
// {
//     int a,x[500];
//     scanf("%d", &a);
//     for (int i = 0; i < a; i++)
//     {
//         if (i<=1)
//         {
//             x[i]=i;
//             // printf('%d ', x);
//         }
//         else
//         {
//             x[i]=x[i-1]+x[i-2];
//         }

//     }
//     for (int i = 0; i < a; i++)
//     {
//         printf("%d ", x[i]);
//     }
//     return 0;
// }

// 2

// #include <stdio.h>
// int main()
// {
//     int n, temp, arr[500];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// 3

// #include <stdio.h>
// int main()
// {
//     int n, arr[500],oc=0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (arr[i]%2!=0)
//         {
//             oc+=arr[i];
//         }
//     }
//     (oc%2==0)?printf("YES"):printf("NO");
//     return 0;
// }

// 4

// #include <stdio.h>
// int main()
// {
//     int n, temp, arr[500], k;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     scanf("%d", &k);
//     printf("%d", arr[k-1]);
//     return 0;
// }

// 5

// #include<stdio.h>

// int main()
// {
//     int i,j,k;
//     for(i=5;i>=1;i--)
//     {
//         if(i%2==1) k=1;
//         else k=i;
//         // for(j=5;j>i;j--)
//         // {
//         //   printf(" ");
//         // }
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",k);
//             if(i%2==1) k++;
//             else k--;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     unsigned int n, s,a,b,c;
//     scanf("%u", &n);
//     for (int i = 0; i < n; i++)
//     {

//         scanf("%u%u%u%u", &s,&a,&b,&c);
//     }
//     printf("%u", (s-(a+b+c)));
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n, arr[110],c=0,k;
//     scanf("%d%d", &n,&k);
//     for (int i = 0; i < n; i++)
//     {

//         scanf("%d", &arr[i]);
//         if (arr[i]<k)
//         {
//             c++;
//         }

//     }
//     printf("%d", c);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,arr[200];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d%%", &arr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==0)
//         {
//             printf("%d minutes\n", 60+20*2+20*3);
//         }

//         else if (arr[i]>0 && arr[i]<=60)
//         {
//             printf("%d minutes\n", (60-arr[i])+20*2+20*3);
//         }
//         else if (arr[i]>60 && arr[i]<=80)
//         {
//             printf("%d minutes\n", (80-arr[i])*2+20*3);
//         }
//         else if (arr[i]>80 && arr[i]<100)
//         {
//             printf("%d minutes\n", (100-arr[i])*3);
//         }
//         else
//         {
//             printf("%d minutes\n", 0);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, arr[500], oc = 0;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (arr[i] % 2 != 0)
//         {
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     long long int a, b, c, s;
//     int t;
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {
//         scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
//     }
//     printf("%lld", s-a-b-c);

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     // Write C code here
//     char name[100];
//     fgets(name,sizeof(name), stdin);
//     for(int i=0; name[i]!=0; i++){
//         if(name[i]>='a' && name[i]<='z'){
//             name[i]-=32;
//         }
//     }
//     puts(name);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char name[100];
//     fgets(name, sizeof(name), stdin);
//     if (name[0] >= 'a' && name[0] <= 'z')
//     {
//         name[0] -= 32;
//     }
//     puts(name);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {

//     int n, m, h = 0, t = 0;
//     char tss[25];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &m);
//         for (int i = 0; i < m; i++)
//         {
//             scanf("%c", &tss[i]);
//             if (tss[i] == 'H')
//             {
//                 h++;
//             }
//             else
//             {
//                 t++;
//             }
//         }
//         if (h > t)
//         {
//             printf("England\n");
//             h = 0;
//             t = 0;
//         }
//         else

//         {
//             printf("Pakistan\n");
//             h = 0;
//             t = 0;
//         }
//     }

// int n, m, k, arr[10000];
// scanf("%d", &n);
// for (int i = 0; i < n; i++)
// {
//     scanf("%d %d", &m, &k);
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     if (k >= m * 2)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

// }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     //Initialize array
//     int arr[] = {25, 11, 7, 75, 56};

//     //Calculate length of array arr
//     int length = sizeof(arr)/sizeof(arr[0]);

//     //Initialize max with first element of array.
//     int max = arr[0];

//     //Loop through the array
//     for (int i = 0; i < length; i++) {
//         //Compare elements of array with max
//        if(arr[i] > max)
//            max = arr[i];
//     }
//     printf("Largest element present in given array: %d\n", max);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int arr[n][m];

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (i==j && arr[i][j] == j)
//             {
//                 printf("%d ", (arr[i][j]) + 3);
//             }
//             else if (arr[i][j] == i && arr[i][j] != j)
//             {
//                 printf("%d ", (arr[i][j]) + 2);
//             }
//             else if (arr[i][j] != i && arr[i][j] == j)
//             {
//                 printf("%d ", (arr[i][j]) + 1);
//             }
//             else
//             {
//                 printf("%d ", arr[i][j]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

