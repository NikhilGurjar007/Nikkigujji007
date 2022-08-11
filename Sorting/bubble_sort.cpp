// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
              swap(a[j],a[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
     cout<<a[i]<<" ";
}

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}


int main()
{
    int arr[] = { 12, 11, 13, 5, 6 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
  
    bubble_sort(arr, N); 
    return 0;
}
