// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void merge_two_sorted_array(int a1[],int a2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a1[i]<=a2[j])
        {
            cout<<a1[i]<<" ";
            i++;
        }
        else
        {
            cout<<a2[j]<<" ";
            j++;
        }
    }
    while(i<m)
    {
        cout<<a1[i]<<" ";
        i++;
    }
    while(j<n)
    {
        cout<<a2[j]<<" ";
        j++;
    }
    
}

int main()
{
    int a1[] = {10,20,35}; 
    int a2[] = {5,50,50}; 
    int m = sizeof(a1) / sizeof(a1[0]); 
    int n = sizeof(a2) / sizeof(a2[0]); 
  
    merge_two_sorted_array(a1,a2,m,n); 
    
    
    return 0;
}
