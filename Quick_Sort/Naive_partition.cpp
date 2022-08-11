// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Naive_Partition(int arr[],int low,int high,int pivot)
{
    int temp[high-low+1],index=0;
    for(int i=low;i<=high;i++)
    {
        if(arr[i]<arr[pivot])
        {
          temp[index]=arr[i];
          index++;
        }
    }
    for(int i=low;i<=high;i++)
    {
        if(arr[i]==arr[pivot])
        {
          temp[index]=arr[i];
          index++;
        }
    }
    int res=low+index-1;
    
    for(int i=low;i<=high;i++)
    {
        if(arr[i]>arr[pivot])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    
    for(int i=low;i<=high;i++)
      arr[i]=temp[i-low];
      
    return res;
}

int main()
{
    int arr[] = {5,3,12,8,5}; 
    int low=0,high=4;
    int pivot=4;
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    cout<<"Index of pivot element: "<<Naive_Partition(arr,low,high,pivot)<<endl;
    
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    
    return 0;
}
