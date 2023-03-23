// #include <stdio.h>
// // int my_func(int x);
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     // my_func(a);
//     if (a > 0)
//     {
//         for (int i = a; i >= -a; i--)
//         {
//             printf("%d ", i);
//         }
//     }
//     else if (a < 0)
//     {
//         for (int i = a; i <= -a; i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     else
//     {
//         printf("%d", 0);
//     }
//     return 0;
// }
// // int my_func(int x){

// if (x > 0)
// {
//     for (int i = x; i >= -x; i--)
//     {
//         printf("%d ", i);
//     }
// }
// else if (x < 0)
// {
//     for (int i = x; i <= -x; i++)
//     {
//         printf("%d ", i);
//     }
// }
// else
// {
//     printf("%d", 0);
// }
// }

// #include <stdio.h>
// int start_pattern(int rows){
//     int i,j;
//     for(i=1; i<=rows; i++)
//     {
//         /* Print leading spaces */
//         for(j=1; j<i; j++)
//         {
//             printf(" ");
//         }

//         /* Print stars */
//         for(j=1; j<=(rows*2 -(2*i-1)); j++)
//         {
//             printf("*");
//         }

//         /* Move to next line */
//         printf("\n");
//     }

// }
// int main()
// {
//     int i, j, rows;

//     /* Input rows to print from user */
//     scanf("%d", &rows);
//     start_pattern(rows);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int i, j, rows;

//     /* Input number of rows to print */
//     printf("Enter number of rows : ");
//     scanf("%d", &rows);

//     /* Iterate through rows */
//     for(i=1; i<=rows; i++)
//     {
//         /* Print leading spaces */
//         for(j=i; j<rows; j++)
//         {
//             printf(" ");
//         }

//         /* Print star */
//         for(j=1; j<=(2*i-1); j++)
//         {
//             printf("*");
//         }

//         /* Move to next line */
//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int even(int x){
//     for (int i = 1; i <= x; i++)
//     {
//         if (i%2==0)
//         {
//             printf("%d ", i);
//         }

//     }

// }
// int main(){
//     int x;
//     scanf("%d", &x);
//     even(x);
//     return 0;
// }

// #include<stdio.h>
// int op(char x, int a, int b){
//     if (x=='+')
//     {
//         return a+b;
//     }
//     else if(x=='-')
//     {
//         return a-b;
//     }
//     else if(x=='*')
//     {
//         return a*b;
//     }
//     else
//     {
//         return a/b;
//     }
// }
// int main(){
//     char x;
//     int a,b;
//     scanf("%c %d %d", &x,&a, &b);
//     printf("%d", op(x,a,b));
//     return 0;
// }

// #include<stdio.h>
// int divisor(int x){
//     for (int i = 1; i <= x; i++)
//     {
//         if (x%i==0)
//         {
//             printf("%d ", i);
//         }
//     }
// }
// int main(){
//     int x;
//     scanf("%d", &x);
//     divisor(x);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int t,x,arr[3];
//     scanf("%d", &t);
//     while(t--){
//         scanf("%d", &x);
//         for(int i=0;i<3;i++){
//             scanf("%d", &arr[i]);
//         }
//         int a=0;
//         for(int i=0;i<3;i++){
//             if(arr[x- 1]!=0){
//                 a++;
//                 x=arr[x- 1];
//             }

//         }
//         if(a==2){
//             printf("YES");
//         }
//         else{
//             printf("NO");
//         }
//     }
// }

// ==================================================== module- 22.5 ====================================================
// #include <stdio.h>
// #include <string.h>
// int is_str(char *n)
// {
//     int nb = 0, b = 0;
//     for (int i = 0; i < strlen(n); i++)

//         (n[i] == '1' || n[i] == '0') ? b++ : nb++;

//     (nb > 0) ? printf("NO") : printf("YES");
// }
// int main()
// {
//     char n[100];
//     scanf("%s", n);
//     // gets(n);
//     is_str(n);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int x;
//     scanf("%d", &x);
//     char n[x][100];
//     for (int i = 0; i < x; i++)
//     {
//         scanf("%s", n[i]);
//     }
//     for (int i = 0; i < x; i++)
//     {
//         printf("%s ", n[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// void add_word(int x, char n[x][100])
// {

//     for (int j = 0; j < x; j++)
//         printf("%s ", n[j]);
// }

// int main()
// {
//     int x;
//     scanf("%d", &x);
//     char n[x][100];
//     for (int i = 0; i < x; i++)
//         scanf("%s", n[i]);

//     add_word(x, n);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int sorting_array(int x, int arr[]){
//     int temp;
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = i+1; j < x; j++)
//         {
//             if (arr[j]<arr[i])
//             {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for (int i = 0; i < x; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// int main()
// {
//     int x, arr[100];
//     scanf("%d", &x);
//     for (int i = 0; i < x; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     sorting_array(x,arr);
//     return 0;
// }

// #include <stdio.h>

// int isPrimeNumber(int num)
// {
//     int i, isPrime = 1;
//     for (i = 2; i <= (num / 2); i++)
//     {
//         if (num % i == 0)
//         {
//             isPrime = 0;
//             break;
//         }
//     }
//     if (isPrime == 1 || num == 2)
//         return 1;
//     else
//         return 0;
// }
// int main()
// {
//     int i, j, rows, counter = 2;

//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             while (!isPrimeNumber(counter))
//             {
//                 counter++;
//             }
//             printf("%d ", counter);
//             counter++;
//         }
//         printf("\n");
//     }
//     return (0);
// }

// #include <stdio.h>
// #include <string.h>
// void change_case(char *a)
// {
//     for (int i = 0; i < strlen(a); i++)
//         (a[i] >= 97) ? printf("%c", a[i] - 32) : printf("%c", a[i] + 32);
// }
// int main()
// {
//     char a[1000];
//     scanf("%s", a);
//     change_case(a);
// }
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i < 10)
//     {
//         printf("I am inside the loop");
//         i++;
//     }
// }

// #include <stdio.h>
// void find_num(int n, int q){
//     int a[10000], b[10000], i, j, k, temp, c = 0;
//     for (i = 1; i <= n; i++)
//     {
//         a[i] = i;
//         if (a[i] % 2 == 1)
//             c++;
//     }
//     for (i = 1; i <= n - 1; i++)
//     {

//         for (j = 1; j <= n - i - 1; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }

//     k = 0;
//     j = n - c;

//     for (i = 1; i <= n; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             if (k < n - c)
//                 b[k++] = a[i];
//         }
//         else
//         {
//             if (j < n)
//                 b[j++] = a[i];
//         }
//     }

//     for (i = 0; i < n; i++)
//     {
//         a[i] = b[i];
//         printf("%d ", a[i]);
//     }
//     printf("\nThe %dth element of the sequence is %d.", q, a[q - 1]);

// }

// int main()
// {
//     int n, q;
//     scanf("%d %d", &n, &q);
//     find_num(n,q);
//     return 0;
// }

// #include <stdio.h>
// int add_three_nums(int a, int b, int c)
// {
// 	return a+b+c;
// }
// int main(){
//     int a,b,c;
//     scanf("%d %d", &a,&b);
//     add_three_nums(a,b);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// void change_case(char *a, int n)
// {
//     for (int i = 0; i < strlen(a); i++){
//         if (a[i]==118)
//         {
//             printf("%c", 97);
//         }
//         else if (a[i]==119)
//         {
//             printf("%c", 98);
//         }
//         else if (a[i]==120)
//         {
//             printf("%c", 99);
//         }
//         else if (a[i]==121)
//         {
//             printf("%c", 100);
//         }
//         else if (a[i]==122)
//         {
//             printf("%c", 101);
//         }
//         else
//         {
//             printf("%c", a[i]+n);
//         }

//     }
// }
// int main()
// {
//     char a[1000];
//     int n;
//     scanf("%s", a);
//     scanf("%d", &n);
//     change_case(a,n);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// #define MAX_STR_LEN 256

// int main( void )
// {
//     const char *perm= "qjczieaungsdfxmphybklortvw";
//     const char *alphabet= "abcdefghijklmnopqrstuvwxyz";
//     char msg[MAX_STR_LEN+1];

//     /* read the message from the terminal using fgets. The variable msg will contain the message. */
//     fgets( msg, MAX_STR_LEN, stdin );

//     msg[ strcspn( msg, "\n" ) ] = '\0';

//     /*compares each value of the string to the alphabet*/
//     for ( size_t i = 0; msg[i] != '\0';  i++ )
//     {
//         const char *p = strchr( alphabet, msg[i] );

//         if ( p != NULL )
//         {
//             msg[i] = perm[p - alphabet];
//         }
//     }

//     puts( msg );
// }

// #include <stdio.h>
// void median_find(int n,int a[100]){
//     float x;
//     x=(a[n/2]-1)+(a[n/2]);
//     (n % 2 == 0)?printf("The median of this array: %.1f", x/2):printf("The median of this array: %d", a[n / 2]);
// }
// int main()
// {
//     int n, a[100], temp;
//     float x;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &a[i]);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[j] < a[i])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     median_find(n, a);
//     return 0;
// }

// Online C compiler to run C program online
// #include <stdio.h>
// #include <string.h>
// void encode(char *str, int k)
// {
//     // printf("%d", (int)str[2]);
//     char newS;
//     for (int i = 0; i < strlen(str); ++i)
//     {
//         // ASCII value
//         int val = (int)str[i];

//         // store the duplicate
//         int dup = k;

//         // if k-th ahead character exceed 'z'
//         if ((val + k) > 122)
//         {
//             k = k - (122 - val);
//             k = k % 26;
//             newS += (char)96 + k;
//         }
//         else
//             newS += (char)val + k;

//         k = dup;
//     }

//     printf("%s", newS);
//     for (int i = 0; i < strlen(str); i++)
//     {
//     }
// }

// int main()
// {
//     // Write C code here
//     char str[100];
//     int k;
//     scanf("%s %d", str, &k);
//     encode(str, k);
//     return 0;
// }

// #include <stdio.h>
// int fact(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//         fact *= i;
//     return fact;
// }
// float fact_ratio(int n, int m)
// {
//     float x = (float)fact(n) / fact(m);
//     return x;
// }
// int main()
// {
//     int n, m;
//     printf("Enter Two Value: \n");
//     scanf("%d %d", &n, &m);
//     printf("The factorial of the first value is: %d\nThe factorial of the second value is: %d\nThe ratio of %d and %d is: %.2f", fact(n), fact(m), n, m, fact_ratio(n, m));
//     return 0;
// }

// =============================================== Module 25.5 ================================================
// #include <stdio.h>
// int fact(int* n, int* m, int  *arr)
// {
//     int c=0;
//     for (size_t i = 0; i < *n; i++)
//     {
//         if (arr[i]< *m || arr[i]>*m)
//         {
//             c++;
//         }
//     }
//     return c;
// }

// int main()
// {
//     int n, m, arr[100];
//     int* p=&n, * q=&m;
//     scanf("%d", &n);
//     for (int  i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     scanf("%d", &m);
//     // int* p=&n, * q=&m;
//     // fact(p,q,arr);
//     printf("%d", fact(p,q,arr));
//     return 0;
// }

// #include <stdio.h>
// int func(int* n, int* m, int *arr){
//     int temp;
//     for (int i = 1; i <= *n; i++)
//     {
//         for (int j = i + 1; j <= *n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     printf("%dth largest element = %d\n%dth smallest element = %d", *m, arr[*n-(*m-1)], *m, arr[*m]);
// }
// int main()
// {
//     int n, m, arr[100], temp;
//     int *p = &n, *q = &m;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &m);
//     func(p,q,arr);
//     return 0;
// }

// #include <stdio.h>
// int func(int p)
// {
//     if (p >= 1)
//         printf("%d ", p);
//     func(p - 1);
// }
// int main()
// {
//     int n, m, arr[100], temp;
//     scanf("%d", &n);
//     func(n);
//     return 0;
// }

// #include <stdio.h>
// int func(int p)
// {
//     int n = 0;
//     if (p > 0)
//         n = p + func(p - 1);
//     return n;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d ", func(n));
//     return 0;
// }

// #include <stdio.h>
// int func(int *p, int *q, int *r)
// {
//     int n;
//     n=*p+*q+*r;
//     return n;
// }
// int main()
// {
//     int a,b,c;
//     int *p=&a,*q=&b,*r=&c;
//     scanf("%d %d %d", &a, &b, &c);
//     printf("%d ", func(p,q,r));
//     return 0;
// }

// #include <stdio.h>
// int func(int *p, int *q, int *r)
// {
//     int n;
//     n=*p+*q+*r;
//     return n;
// }
// int main()
// {
//     int a,b,c;
//     int *p=&a,*q=&b,*r=&c;
//     scanf("%d %d %d", &a, &b, &c);
//     printf("%d ", func(p,q,r));
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// bool func(int n){
//     return (ceil(log2(n)) == floor(log2(n)));
// }

// int main()
// {
//     char a[100], c;
//     int n = 0, x,m;
//     scanf("%s", a);
//     for (int i = 0; i < strlen(a); i++)
//     {
//         if (a[i] >= 'a' && a[i] <= 'z')
//         {
//             n += a[i] - 96;
//         }
//     }
//     x = func(n);

//     if (x)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (pow(2, i) == 8)
//             {
//                 m = i;
//                 break;
//             }
//         }
//         printf("YES\ncost = 2^%d", m);
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }

// Online C compiler to run C program online
// #include <stdio.h>

// int main()
// {
//     // Write C code here
//     int n, arr[1000], m = 0, count=0;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//         for (int i = 1; i <= arr[i]; i++)
//         {
//             if (arr[i] % i == 0)
//             {
//                 m++;
//             }
//         }
//         if (m == 2)
//         {
//             count++;
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int checkPrime(int num){
//     int i;
// 	int flag=0;
// 	for(i=2; i<num/2; i++)
// 	{
// 		if(num%i ==0)
// 		{
// 			flag =1;
// 			break;
// 		}
// 	}
// 	if(flag==1)
// 		return 0;
// 	else
// 		return 1;
// }
// int main() {
//     int n, arr[1000], m = 0, count=0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int isprime=0;
//     for(int i=0;i<n;i++){
//       isprime=checkPrime(arr[i]);
//       if(isprime==1)
//          count++;
//     }
//     printf("%d", count);
//     return 0;
// }

// #include <stdio.h>
// int is_prime(int n, int *arr)
// {
//     int c = 0, total = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= arr[i]; j++)
//         {
//             if (arr[i] % j == 0)
//                 c++;
//         }

//         if (c == 2)
//         {
//             c = 0;
//             total++;
//         }
//         else
//             c = 0;
//     }
//     return total;
// }

// float avg(int n, int *arr)
// {
//     float sum = 0;
//     for (int i = 0; i < n; i++)
//         sum += arr[i];
//     return sum / n;
// }

// int main()
// {
//     int n, arr[1000];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     printf("Prime numbers: %d\nAverage of all positive integers: %.2f", is_prime(n, arr), avg(n, arr));
//     return 0;
// }

// Online C compiler to run C program online
// #include <stdio.h>
// char  beautiful_array(int n, int *arr){
//     int x,str, count=0,total=0;
//     for(int i=0; i<n; i++){
//         str=arr[i];
//         while(str!=0){
//             if(str%10==7){
//                 count++;
//             }
//             str/=10;
//         }
//     }
//     if (n%2==0){
//         x=n/2;
//     }
//     else{
//         x=(n/2)+1;
//     }
//     (count>=x)?printf("Beautiful"):printf("Ugly");

// }

// int main() {
//     int n =5,arr[1000];
//     scanf("%d", &n);
//     for(int i=0; i<n; i++)
//         scanf("%d", &arr[i]);
//     beautiful_array(n, arr);
//     return 0;
// }

// #include <stdio.h>
// char  beautiful_array(int n, int *arr){
//     int x,count=0,total=0;
//     for(int i=0; i<n; i++){
//         while(arr[i]!=0){
//             if(arr[i]%10==7)
//                 count++;
//             arr[i]/=10;
//         }
//         // if(count>0){
//         //     total++;
//         //     count=0;
//         // }
//     }
//     //printf("%d", total);
//     if (n%2==0){
//         x=n/2;
//     }
//     else{
//         x=(n/2)+1;
//     }
//     (count>=x)?printf("Beautiful"):printf("Ugly");
// }

// int main() {
//     int n,arr[1000];
//     scanf("%d", &n);
//     for(int i=0; i<n; i++)
//         scanf("%d", &arr[i]);
//     beautiful_array(n, arr);
//     return 0;
// }

// ===========================================

// #include <stdio.h>
// #include <stdlib.h>
// struct manhattan
// {
//     int x,y;
// };
// int manhattan_find(struct manhattan p1, struct manhattan p2){
//     int res = abs(p1.x-p2.x)+abs(p1.y-p2.y);
//     return res;
// }

// int main() {
//     // struct manhattan p1={1,1};
//     // struct manhattan p2={4,5};
//     // struct manhattan p1={1,1},p2={4,5};
//     struct manhattan p1,p2;
//     scanf("(%d,%d)\n", &p1.x , &p1.y);
//     scanf("(%d,%d)", &p2.x , &p2.y);
//     int ans= manhattan_find(p1,p2);
//     printf("%d", ans);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct Point
// {
//     float x, y;
// };
// struct Point mid(struct Point p1, struct Point p2)
// {
//     struct Point ans;
//     ans.x = (p1.x + p2.x) / 2;
//     ans.y = (p1.y + p2.y) / 2;
//     return ans;
// }

// int main()
// {
//     struct Point p1 = {1, 1}, p2 = {4, 5};
//     struct Point p3 = mid(p1, p2);
//     // printf("%f %f", p3.x,p3.y);
//     printf("%f %f", mid(p1, p2).x, mid(p1, p2).y);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct point{
//     float x,y;
// };
// struct triangle{
//     struct point A, B, C;
// };
// struct point centroid(struct triangle t){
//     struct point ans;
//     ans.x = (t.A.x+t.B.x+t.C.x)/3;
//     ans.y = (t.A.y+t.B.y+t.C.y)/3;
//     return ans;
// };
// int main(){
//     struct point p1={1,1}, p2={4,5}, p3={1,5};
//     struct triangle t= {p1,p2, p3};
//     struct point ans = centroid(t);
//     printf("%f %f", ans.x, ans.y);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct students{
//     int roll;
//     char name[30];
//     double marks;
// };
// void print_details(int i, struct students s){
//     printf("\nThe roll is => %d\n", s.roll);
//     printf("Name is => %s\n", s.name);
//     printf("Total marks => %lf\n", s.marks);
//     printf("\n");
// }
// int main(){
//     struct students s[5];
//     int i;
//     for (i = 0; i < 5; i++){
//         scanf("%d", &s[i].roll);
//         scanf("%s", s[i].name);
//         scanf("%lf", &s[i].marks);
//     }
//     for (i = 0; i < 5; i++)
//         print_details(i, s[i]);
//     return 0;
// }
/*
12
arif
80

15
reza
88

18
dawod
90

20
ibrahim
93

23
musa
97

*/

// #include <stdio.h>
// #include <stdlib.h>
// struct comp{
//     double real, img;
// };
// void print_comp(struct comp c){
//     printf("%.2lf + %.2lfi\n", c.real,c.img);
// }

// struct comp add_comp(struct comp c1, struct comp c2){
//     struct comp sum;
//     sum.real = (c1.real+c2.real);
//     sum.img = (c1.img+c2.img);
//     return sum;
// };
// struct comp mult_comp(struct comp c1, struct comp c2){
//     struct comp mult;
//     mult.real = (c1.real*c2.real)-(c1.img*c2.img);
//     mult.img = (c1.img*c2.real)+(c1.real*c2.img);
//     return mult;
// };
// int main(){
//     // struct comp c1={5,3}, c2={3,4};
//     struct comp c1={5.9,3.1}, c2={-2.5,3.7};
//     print_comp(c1);
//     print_comp(add_comp(c1,c2));
//     print_comp(mult_comp(c1,c2));
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int n, *ptr=(int*) malloc(n*sizeof(int));
//     scanf("%d", &n);
//     // ptr = (int*) malloc(n*sizeof(int));
//     for (int i = 0; i < n; i++)
//         scanf("%d", ptr+i);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", *(ptr+i));
//         // printf("%d ", ptr[i]);
//     }
//     free(ptr);
//     return 0;
// }

// C program to show Arrow operator
// used in structure

// #include <stdio.h>
// #include <stdlib.h>
// struct student{
//     char name[80];
//     int age;
//     float percentage;
// };
// int main(){
//     struct student emp= {.name="arif", .age=23, .percentage=80.7};
//     struct student* ptr = &emp;
//     printf("%s", ptr->name);
//     return 0;
// }

// #include <stdio.h>
// struct book{
//     char title[20];
//     char Author_name[100];
//     float price;
//     int pages;
// };
// int main(){
//     struct book book1 = {"Cprogramming", "ABC", 130.00, 550};
//     printf("Title = %s\n", book1.title);
//     printf("Name = %s\n", book1.Author_name);
//     printf("Price = %.2f\n", book1.price);
//     printf("Pages = %d\n", book1.pages);
//     return 0;
// }

// #include <stdio.h>
// struct information{
//     char name[30];
//     int roll,marks;
// };
// int main(){
//     struct information student;
//     printf("Enter information:\n");
//     printf("Enter name: ");
//     scanf("%s", student.name);
//     printf("Enter roll number: ");
//     scanf("%d", &student.roll);
//     printf("Enter marks: ");
//     scanf("%d", &student.marks);
//     printf("Displaying Information:\nName: %s\nRoll number: %d\nMarks: %d", student.name, student.roll, student.marks);
//     return 0;
// }

// ========================================32.5========================

// #include <stdio.h>
// int pow_func(int n, int i){
//     if(i!=0) return n*pow_func(n, i-1);
//     else return 1;
// }
// int main() {
//     int i,n;
//     scanf("%d %d", &n, &i);
//     printf("%d", pow_func(n, i));
//     return 0;
// }

// #include <stdio.h>
// int add_func(int arr[], int start, int n){
//     if (start < n) return (arr[start]%10)+add_func(arr, start + 1, n);
//     else return 1;
// }
// int main(){
//     int n, arr[100];
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//         scanf("%d", &arr[i]);
//     printf("%d", add_func(arr, 1, n));
//     return 0;
// }

// #include <stdio.h>
// int add_func(int n,int i){
//     if (i<=n){
//         printf("%d ", i);
//         add_func(n, i+1);
//     }
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     add_func(n,1);
//     return 0;
// }

// #include <stdio.h>
// int add_func(int n,int i){
//     if (i<=n){
//         add_func(n, i+1);
//         printf("%d ", i);
//     }
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     add_func(n,1);
//     return 0;
// }

// #include <stdio.h>
// int add_func(int n,int i){
//     if (i<=n) return i+add_func(n, i+1);
//     else return 0;
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("%d", add_func(n,1));
//     return 0;
// }

// ==============================================================final contest========

// #include <stdio.h>
// int main(){
//     int i, j, rows;
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++){
//         for (j = i; j < rows; j++)
//             printf(" ");
//         if (i % 2 == 0){
//             for (j = 1; j <= (2 * i - 1); j++)
//                 printf("*");
//         }
//         else{
//             for (j = 1; j <= (2 * i - 1); j++)
//                 printf("^");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i, j, n, a[105], b[105],temp;
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//         scanf("%d", &a[i]);

//     for (i = 0; i < n; i++)
//         scanf("%d", &b[i]);

//     for (i = 0; i < n; i++){
//         for (int j = i + 1; j < n; j++){
//             if (a[j] < a[i]){
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//             if (b[j] > b[i]){
//                 temp = b[i];
//                 b[i] = b[j];
//                 b[j] = temp;
//             }
//         }
//     }

//     for (i = 0; i < n; i++)
//         printf("%d ", a[i]-b[i]);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int year;
//     scanf("%d", &year);
//     if (year % 400 == 0) printf("Yes");
//     else if (year % 100 != 0 && year % 4 == 0) printf("Yes");
//     else printf("No");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     char arr[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//     int i,n;
//     scanf("%d", &n);
//     char a[n][20];
//     for (i = 0; i < n; i++)
//         scanf("%s", a[i]);

//     for (i = 0; i < n; i++){
//         int d= atoi(a[i]);
//         while (d!=0){
//             printf("%c", arr[(d%10)-1]);
//             d/=10;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,s;
//     scanf("%d %d", &n,&s);
//     printf("%d", (s-n)/2);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, l, r, i, j, flag,k=0;
//     scanf("%d", &n);
//     while(k!=n){
//         scanf("%d %d", &l, &r);
//         for (i = l; i <= r; i++){
//             if (i == 0)
//                 continue;
//             flag = 1;
//             for (j = 2; j <= i / 2; ++j){
//                 if (i % j == 0){
//                     flag = 0;
//                     break;
//                 }
//             }
//             if (flag == 1)
//                 printf("%d ", i);
//         }
//         printf("\n");
//         k++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, x, s, arr[10000], count = 0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &x);
//         for (int i = 0; i < x; i++)
//             scanf("%d", &arr[i]);

//         scanf("%d", &s);
//         for (int j = 0; j < x; j++){
//             if (s == arr[j]){
//                 printf("Case %d: %d\n", i + 1, j + 1);
//                 count++;
//             }
//         }
//         if (count == 0){
//             printf("Case %d: Not Found\n", i + 1);
//         }
//         else{
//             count = 0;
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int n, count = 0;
//     scanf("%d", &n);
//     char str[n];
//     scanf("%s", str);

//     for (int i = 0; i < n; i++){
//         int flag = 0;
//         for (int j = 0; j < n; j++){
//             if (str[i] == str[j] && i != j){
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//             count++;
//     }
//     printf("%d", count);
//     return 0;
// }

// #include <stdio.h>
// int gcd(int n, int m){
//     int res;
//     if (n > m){
//         for (int i = 1; i <= m; i++)
//             if (n % i == 0 && m % i == 0)
//                 res = i;
//         return res;
//     }
//     else{
//         for (int i = 1; i <= n; i++)
//             if (n % i == 0 && m % i == 0)
//                 res = i;
//         return res;
//     }
// }
// int main(){
//     int n, x, ans1, ans2, s = 0;
//     scanf("%d", &x);
//     for (int k = 0; k < x; k++){
//         scanf("%d", &n);
//         int arr[n];
//         for (int i = 0; i < n; i++)
//             scanf("%d", &arr[i]);

//         for (int i = 0; i < n; i++)
//             for (int j = i + 1; j < n; j++){
//                 ans1 = gcd(arr[i], arr[j]);
//                 ans2 = gcd(arr[j], arr[i]);
//                 if (ans1 == 1 && ans2 == 1)
//                     s += ans1 + ans2;
//             }
//         printf("%d\n", s);
//         s = 0;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int t, k=0;
//     scanf("%d", &t);
//     while(k!=t){
//         int n;
//         scanf("%d", &n);
//         int ara[n];
//         for(int i=0; i<n; i++){
//             scanf("%d", &ara[i]);
//         }
//         int i,is_found=-1,search_value;
//         scanf("%d",&search_value);
//         for(i=0;i<n;i++){
//             if(ara[i]==search_value){
//                 is_found=i+1;
//                 break;
//             }
//         }
//         if(is_found==-1){
//             printf("Case %d: Not Found\n", k+1);
//         }else{
//             printf("Case %d: %d\n", k+1,is_found);
//         }
//         k++;
//     }
//     return 0;
// }

// // 1. Write a C Program to swap two numbers without using third variable
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d", &a,&b);
//     printf("a = %d, b = %d\n", a, b);
//     a = a+b;
//     b=a-b;
//     a = a-b;
//     printf("a = %d, b = %d", a, b);
//     return 0;
// }

// // 2. Write a C program to calculate simple interest using function.
// simple_interest = (principal * rate * time) / 100
// #include <stdio.h>
// int main(){
//     int p,r,t, si;
//     printf("Enter principal rate  time\n");
//     scanf("%d%d%d", &p,&r,&t);
//     si = (p*r*t)/100;
//     printf("The simple_interest = %d", si);

//     return 0;
// }

// // 3. Write a c program to Reverse an Integer using function
// #include <stdio.h>
// int rev_num(int n){
//     int x, r=0;
//     while (n!=0)
//     {
//         x = n%10;
//         r = r*10+x;
//         n/=10;
//     }
//     return r;
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("%d", rev_num(n));
//     return 0;
// }

// // 4. Write a program in C for, How to compare two array is equal in size or not.
// #include <stdio.h>
// int main()
// {
//     int arr1[] = {1, 2, 5, 3, 4, 5};
//     int arr2[] = {2, 3, 1, 9, 5,5};
//     int size1 = sizeof(arr1) / sizeof(int);
//     int size2 = sizeof(arr2) / sizeof(int);
//     (size1 == size2)?printf("size of both arrays are equal"):printf("size of arrays are not equal");
//     return 0;
// }

// // 5. Write a program in C to find second highest number in an integer array.
// #include <stdio.h>
// int main()
// {
//     int arr[] = {2, 3, 1, 9, 5, 4}, temp;
//     for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//     {
//         for (int j = i + 1; j < sizeof(arr) / sizeof(int); j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//         printf("%d ", arr[i]);

//     return 0;
// }

// // 6. Write a c program to find out  strong number or not.
// #include <stdio.h>
// int factorial(int x){
//     int i=1, fact = 1;
//     while (i<=x)
//     {
//         fact*=i;
//         i++;
//     }
//     return fact;

// }
// int main()
// {
//     int n, sum = 0, temp;
//     scanf("%d", &n);
//     temp = n;
//     while (n!=0)
//     {
//         int x = n%10;
//         sum += factorial(x);
//         n/=10;
//     }
//     if (sum == temp) printf("YES\n");
//     else printf("NO\n");
//     printf("%d", sum);
//     return 0;
// }

// // 9. Write a c program to find out  strong number or not.
// #include <stdio.h>
// int fact(int x)
// {
//     if (x == 0)
//     {
//         return 1;
//     }
//     return x * fact(x - 1);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", fact(n));
//     return 0;
// }

// //10. Write a C program to print first duplicate number in array 1-100.
#include <stdio.h>

int main()
{
    int arr[100], i, j;
    printf("Enter 100 integers from 1-100:\n");
    for (i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {
            if (arr[i] == arr[j]) {
                printf("The first duplicate number is: %d", arr[i]);
                return 0;
            }
        }
    }

    printf("There is no duplicate number in the array");

    return 0;
}
