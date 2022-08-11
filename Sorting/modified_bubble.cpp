// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void modified_bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==0)
         break;
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
  
    modified_bubble_sort(arr, n); 
    
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
    return 0;
}
