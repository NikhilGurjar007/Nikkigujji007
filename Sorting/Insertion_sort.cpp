// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
    int i,j=a[1];
    for(j=1;j<n;j++)
    {
        for(i=j-1;i>=0;i--)
        {
            if(a[j]<a[i])
            {
             swap(a[j],a[i]);
             j=j-1;
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
  
    insertion_sort(arr, N); 
    return 0;
}
