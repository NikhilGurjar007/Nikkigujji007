// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void selection_sort(int arr[],int n)
{
    int min,i,j;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
             min=j;
        }
        swap(arr[min],arr[i]);
    }
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
  
    selection_sort(arr, n); 
    
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
    return 0;
}
