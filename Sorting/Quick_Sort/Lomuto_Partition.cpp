// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Lomuto_Partition(int arr[],int low,int high)
{
    int i=low-1;
    int pivot=arr[high];
    
    for(int j=0;j<=high-1;j++)    // (high-1) isliye kyuki arr[high] par pivot kundli maar ke baitha hain .....
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

int main()
{
    int arr[] = {10,80,30,90,40,50,70}; 
    int low=0,high=6;
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    cout<<"Index of pivot element: "<<Lomuto_Partition(arr,low,high)<<endl;
    
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    
    return 0;
}
