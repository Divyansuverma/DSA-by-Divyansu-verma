// #include<iostream>
// using namespace std;

// int add(int a, int b){
//   cout<<"a+b="<<a+b<<endl;
//   cout<<"a-b="<<a-b<<endl;
//   cout<<"a*b="<<a*b<<endl;
//   cout<<"a/b="<<(float)a/b<<endl;
// }
// int main(){
//   int x,y;
//   cout<<"Enter the two number fo addition: "<<endl;
//   cin>>x>>y;
//   add(x,y);
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//   queue<int> q;
//   q.push(5);
//   q.push(7);
//   q.push(2);
//   q.push(6);

//   cout << "Top element---> " << q.front() << endl;
//   cout << "Size--> " << q.size();
//   q.pop();
//   cout << "Size--> " << q.size();
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// class Stack
// {
// public:
//   int *arr;
//   int size;
//   int top;

//   Stack(int size)
//   {
//     this->size = size;
//     arr = new int(size);
//     top = -1;
//   }

//   void push(int element)
//   {
//     if (size - top >= 1)
//     {
//       top++;
//       arr[top] = element;
//     }
//     else
//     {
//       cout << "Stack is Full.." << endl;
//     }
//   }
//   void pop()
//   {
//     if (top >= 0)
//     {
//       top--;
//     }
//     else
//     {
//       cout << "Empty Stack:" << endl;
//     }
//   }

//   int peak()
//   {
//     if (top >= 0)
//       return arr[top];
//     else
//       cout << "empty";
//     return -1;
//   }

//   bool isEmpty()
//   {
//     if (top == -1)
//     {
//       cout << "This is Empty:";
//     }
//     else
//     {
//       cout << "This is not Empty:";
//     }
//   }
// };

// int main()
// {
//   Stack st(5);

//   st.push(60);
//   st.push(78);
//   st.push(12);
//   st.push(54);

//   cout << "Top element---> " << st.peak();
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int item, top = -1,i,ch=1;
//   int stk[100];
//   while (ch == 1 && top < 9)
//   {
//     cout << "enter the number:";
//     cin >> item;

//     top++;
//     stk[top] = item;
//     cout << "Stack is ";
//     for (int i = top; i >= 0; i--)
//     {
//       cout << stk[i]<<ends;
//     }
//     cout <<endl<< "if you want enter more press  1/0 ";
//     cin >> ch;
//   }
//   while (ch == 0 && top >= 0)
//   {
//     item = stk[i];
//     top--;
//     cout << "After pop is optimise";
//     for (int i = top; i >= 0; i--)
//     {
//       cout << stk[i];
//     }
//     cout << "if you want to press  0/1";
//     cin >> ch;
//   }
//   if (top = 0)
//   {
//     cout << "underfull:";
//   }
// }

// #include <iostream>
// using namespace std;
// int top = -1;
// void push(int stk[], int n)
// {
//   if (top > n - 1)
//   {
//     cout << "Stak is overload: ";
//   }
//   else
//   {
//     top = top + 1;
//     stk[top] = n;
//   }
// }

// void pop(int stk[])
// {
//   if (top < 0)
//   {
//     cout << "Stack is underload:";
//   }
//   else
//   {
//     cout << "pop the element = " << stk[top];
//     top = top - 1;
//   }
// }

// void display(int stk[])
// {
//   int i;
//   if (top < 0)
//   {
//     cout << "inderflow:";
//   }
//   else
//   {
//     cout << "Stack element are ";
//     for (i = top; i >= 0; i--)
//     {
//       cout << stk[top];
//     }
//   }
// }
// int main()
// {
//   int stk[4];
//   int ch;
//   {
//     cout << "1.push";
//     cout << "2.pop";
//     cout << "3.display";
//     cout << "Enter the number:";
//     cin >> ch;

//     do
//     {
//       int n;
//       switch (ch)
//       {
//       case 1:
//         cout << "Enter the item:";
//         cin >> n;
//         void push();
//         break;

//       case 2:
//         void pop();
//         break;

//       case 3:
//         void display();
//         break;
//       }
//     } while (ch != 4);
//   }
// }

// #include <iostream>
// using namespace std;

// int top = -1;

// int push(int size, int arr[])
// {
//     int elem;
//     if (top >= (size - 1))
//     {
//         cout << " Stack is overflow:" << endl;
//     }
//     else
//     {
//         cout << "push the element:";
//         cin >> elem;
//         top++;
//         arr[top] = elem;
//     }
// }

// int pop(int arr[])
// {
//     if (top < 0)
//     {
//         cout << "Stack is Underload:" << endl;
//     }

//     else
//         cout << "Pop this element" << arr[top];
//     top--;
// }

// int display(int arr[])
// {
//     if (top < 0)
//     {
//         cout << "Stack is Empty:" << endl;
//     }

//     else
//         for (int i =0; i <= top; i++)
//             cout << arr[i] << ends;
// }

// int main()
// {
//     int n, ch;
//     cout << "enter the size of stack:";
//     cin >> n;
//     int arr[n];

//     while (1)
//     {
//         cout << endl
//              << "Enter the choice." << endl
//              << "1. Push" << ends << "2. Pop" << ends << "3. Display" << ends << "4. Exit" << endl
//              << endl
//              << "ENTER: ";
//         cin >> ch;

//         switch (ch)
//         {

//         case 1:
//             push(n, arr);
//             break;
//         case 2:
//             pop(arr);
//             break;
//         case 3:
//             display(arr);
//             break;
//         case 4:
//             cout << "OK! Best of Luck....";
//             exit(0);
//         default:
//             cout << "nothing..." << endl;
//             break;
//         }
//     }
//     cout << "OK! Best ok Luck...";
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//   queue<int> q;

//   q.push(20);
//   q.push(30);
//   q.push(40);
//   q.push(50);

//   cout << "Size of queue Element: " << q.size()<<endl;
//   cout << "Top Element: " << q.front() << endl;
//   q.pop();
//   cout << "Size of queue Element After Pop: " << q.size()<<endl;
//   cout << "Top Element of After Pop : " << q.front();
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n[100], h, a[100][100], i, j;
//   char choise;
//   cout << "How many want arrays: " << endl;
//   cin >> h;
//   for (int i = 0; i < h; i++)
//   {
//     cout << "Enter the size:";
//     cin >> n[i];
//     cout << "Enter the Array: " << endl;
//     for (int j = 0; j < n[i]; j++)
//     {
//       cin >> a[i][j];
//     }
//   }

//   cout << "Your All Array......" << endl;
//   for (int i = 0; i < h; i++)
//   {
//     for (int j = 0; j < n[i]; j++)
//     {
//       cout << a[i][j] << ends;
//     }
//     cout << endl;
//   }
// }

///<<<<<....SEARCHING ELEMENTS OF TWO ARRAY....>>>>>
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, m, i, j, i1, j1, t, flag = 0, target;
//   char choise;
//   do
//   {
//     cout << "Enter the size of Rows: ";
//     cin >> n;
//     cout << "Enter the size of Coloums: ";
//     cin >> m;

//     int a[n][m];

//     cout << "Enter the Array....." << endl;
//     for (int i = 0; i < n; i++)
//     {
//       for (int j = 0; j < m; j++)
//       {
//         cin >> a[i][j];
//       }
//     }

//     for (int i1 = 0; i1 < n; i1++)
//     {
//       for (int j1 = 0; j1 < m; j1++)
//       {
//         for (int i = 0; i < n; i++)
//         {
//           for (int j = 0; j < m; j++)
//           {
//             if (a[i][j] > a[i1][j1])
//             {
//               t = a[i1][j1];
//               a[i1][j1] = a[i][j];
//               a[i][j] = t;
//             }
//           }
//         }
//       }
//     }

//     cout << "Your Array....." << endl;
//     for (int i = 0; i < n; i++)
//     {
//       for (int j = 0; j < m; j++)
//       {
//         cout << a[i][j] << ends;
//       }
//       cout << endl;
//     }

//     cout << "Enter your target: ";
//     cin >> target;

//     i1 = 0;
//     j1 = n - 1;
//     while (i1 < n and j1 > 0)
//     {
//       if (a[i1][j1] == target)
//       {
//         flag = 1;
//         break;
//       }
//       else if (a[i1][j1] > target)
//       {
//         j1--;
//       }
//       else
//         i1++;
//     }
//     if (flag == 1)
//     {
//       cout << "Found ok Baby!...." << endl;
//     }
//     else
//     {
//       cout << "Not Found Baby...."<<endl;
//     }
//     cout << "Do you went to again [Y/N] : ";
//     cin >> choise;
//   } while (choise == 'Y' || choise == 'y');
//   cout << endl
//        << "OK!" << endl
//        << "  Best Of Luck...." << endl;
// }

// ///<<<<.....INSERTATION SORT.....>>>>>>
// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;

//   int a[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> a[i];
//   }

//   for (int i = 1; i < n; i++)
//   {
//     int current = a[i];
//     int j = i - 1;
//     while (a[j] > current && j >= 0)
//     {
//       a[j + 1] = a[j];
//       j--;
//     }
//     a[j+1] = current;
//   }

//   for (int i = 0; i < n; i++)
//   {
//     cout << a[i]<<" ";
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n,flag=0,i;
//   cin >> n;
//   int a[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> a[i];
//   }
//   for(int i=0;i<n;i++)
//   {
//     for(int j=i;j<n;j++)
//     {
//       if(a[i]==a[j])
//       {
//         flag=1;
//         break;
//       }
//       else
//       exit(0);
//     }
//   }
// //  a[n]=a[n-1];
//   if(flag==1)
//   {
//     cout<<a[i];
//   }
// }

// ////<<<<<.....TOWER___HANOYI.....>>>>>
// #include <iostream>
// using namespace std;

// void TOH(int n, char beg, char aux, char end)
// {
//   if (n >= 1)
//   {
//     TOH(n - 1, beg, end, aux);
//     cout << n << beg << end << ends;
//     TOH(n - 1, aux, beg, end);
//   }
// }

// int main()
// {
//   int n;
//   cin >> n;
//   cout << endl;
//   TOH(n, 'A', 'B', 'C');
// }

// //______LIST_____STL______

// #include <iostream>
// #include <list>
// using namespace std;

// int main()
// {
//   list<int> l;
//   l.push_back(5);
//   l.push_back(6);
//   l.push_back(2);
//   l.push_back(8);

//   cout << "List= " << l.front() << endl;
//   cout << "List= " << l.end() << endl;
//   cout << "List= " << l.back() << endl;
//   cout << "List= " << l.remove(6) << endl;
// }

// #include<iostream>
// using namespace std;

// class sers
// {
//   public:
//   int sum=0;
//   int hello(int arr[], int brr[], int n)
//   {
//     int i=0;
//     while(i<n)
//     {
//       sum=brr[i]*arr[n-1]+sum;
//       i++;
//       sum++;
//       n++;
//     }
//   }
// };

// int main()
// {
//   int arr[3]={1,2,3};
//   int brr[3]={4,5,6};
//   sers s;
//   int set=s.hello(arr,brr,3);
//   cout<<"det= "<<set;

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int sum = 0, n = 5, i;
//   int arr[n] = {1,1,3,9,4};
//   int brr[n] = {4,5,6,3,4};

// // int count = 1;
// //  while (count < n)
// //  {
// //    for (int i = 0; i < n - count; i++)
// //    {
// //      if (arr[i] > arr[i + 1])
// //      {
// //        int temp = arr[i];
// //        arr[i] = arr[i + 1];
// //        arr[i + 1] = temp;
// //      }
// //      if (brr[i] > brr[i + 1])
// //      {
// //        int temp = brr[i];
// //        brr[i] = brr[i + 1];
// //        brr[i + 1] = temp;
// //      }
// //    }
// //    count++;
// //  }

//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       if (arr[i] > arr[j])
//       {
//         int temp = arr[i];
//         arr[i] = arr[i + 1];
//         arr[i + 1] = temp;
//       }

//       if (brr[i] > brr[j])
//       {
//         int temp = brr[i];
//         brr[i] = brr[j];
//         brr[j] = temp;
//       }
//     }
//   }

//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << ends;
//   }
//   cout << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout << brr[i] << ends;
//   }

//   int l = n;
//   i = 0;
//   while (i < n)
//   {
//     sum = brr[i] * arr[l - 1] + sum;
//     l--;
//     i++;
//   }
//   cout << "sum= " << sum;
//   cout << "Gej";
// }

// #include<iostream>
// using namespace std;
// //101
// //100
// //011
// // 0010

// int main()
// {
//   int a=5,b=9;-*+
//   cout<<"a|b= "<<(a|b)<<endl;
//   cout<<"a&b= "<<(a&b)<<endl;
//   cout<<"a^b= "<<(a^b)<<endl;
//   cout<<"~a= "<<(~a)<<endl;
//   cout<<"a>>= "<<(a>>1)<<endl;
// return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n = 3;
//   int arr[n] = {1, 1, 3};
//   int brr[n] = {6, 4, 5};
//   sort(arr, arr + 3);
//   sort(brr, brr + 3);

//   int l = n;
//  int i = 0,sum=0;
//   while (i < n)
//   {
//     sum = brr[i] * arr[l - 1] + sum;
//     l--;
//     i++;
//   }
//   cout << "sum= " << sum;
//   cout << "Gej";
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[5]={1,2,3,1,2};
//   int ans=0;
//   // for(int i=0;i<5;i++)
//   // {
//   //   ans=arr[i]^ans;
//   // }

//   int b=ans^arr[5];
//   cout<<b;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i, n = 5;
//   int arr[5] = {1, 2, 3, 4, 5};

//   int c = arr[n - 1];

//   for (int i =n-1; i > 0; i--)
//   {
//     arr[i] = arr[n - 1];
//   }
//   arr[0]=c;
// }

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int flag;
//   int a[3] = {7, 2, 5};
//   int b[3] = {7, 2, 5};
//   sort(a,a+3);
//   sort(b,b+3);
//   for (int i = 0; i < 3; i++)
//   {
//     if (a[i]^b[i]==0)
//     {
//     flag=1;
//     }
//     else
//     {
//     flag==2;
//     }
//   }
//   if(flag==1)
//   {
//     cout<<"OK!";
//   }
//   if(flag==2)
//   {
//     cout<<"NO!";
//   }
//   return 0;
// }

//.....Kth...Elememnt.....>>>>>>

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int s;
//     int k=4;
//     int a[5]={7,10,4,20,15};
//     sort(a,a+5);
//     for(int i=0;i<5;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<6;i++)
//     {
//         if(i==k)
//         {
//              s=a[i-1];
//            cout<<"ol= "<<s;

//         }
//     }
// return 0;
// }




// C++ code to demonstrate the working of
// merge() implementation 1

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	vector<int> arr1 = {2, 3, 6, 7, 9};

// 	vector<int> arr2 = {1, 4, 8, 10};

// 	vector<int> arr3(9);

// 	// sort(arr1.begin(), arr1.end());
// 	// sort(arr2.begin(), arr2.end());

// 	merge(arr1, arr1+5, arr2, arr2+4, arr3);

// 	cout << "The container after merging initial containers is : ";

// 	for (int i = 0; i < arr3.size(); i++)
// 		cout << arr3[i] << " ";
// 	return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int arr1[] = {5, 33, 55, 65, 76, 80, 90};
int arr2[] = {10, 13, 14, 15, 15, 22, 27, 
32, 34, 36, 36, 37, 39, 40, 42, 45, 49, 50,
50, 53, 56, 56, 57, 61, 65, 66, 70, 70, 71,
74, 78, 84, 87, 90, 91, 94, 94, 96, 99};
int n = 7;
int m = 39;

int final[n+m];
merge(arr1, (arr1 + n), arr2, (arr2 + m), final);
cout<<"Final array after merging the elements is: ";
for (int i = 0; i < (m + n); i++)
cout << final[i] << " ";
cout<<endl;
int i,s,k=39;
cout<<endl<<" ";
for (int i = 0; i < (m + n)+2; i++)
{
    if(i==k)
        {
             cout<<final[i-1]<<" ";
             break;
        }
}
return 0;
}
