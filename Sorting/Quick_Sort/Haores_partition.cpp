// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Haore_Partition(int arr[],int low,int high)
{
    int i=low-1;
    int j=high+1;
    int pivot=arr[low];
    while(true)
    {
        do{
            i++;
        }while(arr[i]<pivot);
        
        do{
            j--;
        }while(arr[j]>pivot);
        
        if(i>=j)
         return j;
         
        swap(arr[i],arr[j]);
    }
}

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}


int main()
{
    int arr[] = {5,3,8,4,2,7,1,10}; 
    int low=0,high=7;
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    Haore_Partition(arr,low,high);
    
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    
    return 0;
}
