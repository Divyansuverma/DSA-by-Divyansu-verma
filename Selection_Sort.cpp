// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// //Wrong Program X
// int main()
// {
//     int n,a[100];
//     cout<<"Enter the Size: ";
//     cin>>n;

//     cout<<"Enter the Array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
    
//     for(int i=0;i<n-1;i++)
//     {
//         int k=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[j]<a[k])
//             {
//                 int temp=a[j];
//                 a[j]=a[i];
//                 a[i]=temp;
//             }
//         }

//         for(int i=0;i<n;i++)
//         {
//             cout<<a[i]<<" ";
//         }
//     }
// return 0;
// }

// Selection sort in C++

#include <iostream>
using namespace std;

// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}

// driver code
int main() {
 int n;
 cout<<"Enter the Size of Array: ";
 cin>>n;
 int arr[n];
 cout<<"Enter the Array: ";
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
  selectionSort(arr,n);
  cout << "Selection Sorted array in Acsending Order:\n";
  printArray(arr,n);
}