// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
    int m=mid-low+1;
    int n=high-mid;
    int left[m],right[n];
    
    for(int i=0;i<m;i++)
      left[i]=arr[low+i];
    
    for(int j=0;j<n;j++)
      right[j]=arr[mid+j+1];
      
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    
    while(i<m)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}

int main()
{
    int arr[] = {10,20,40,20,30}; 
    int low=0,mid=2,high=4;
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    merge(arr,low,mid,high);
    
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    
    return 0;
}
