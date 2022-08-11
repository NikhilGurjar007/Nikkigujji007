// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    if(n==0 || n==1)
     return ;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
         swap(arr[i],arr[i+1]);
    }
    bubble_sort(arr,n-1);
    
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
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    bubble_sort(arr, n); 
    
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
    return 0;
}
