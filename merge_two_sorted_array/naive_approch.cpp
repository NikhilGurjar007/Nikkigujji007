// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void merge_two_sorted_array(int a1[],int a2[],int m,int n)
{
    int c[m+n];
    for(int i=0;i<m;i++)
     c[i]=a1[i];
    for(int j=0;j<n;j++)
     c[m+j]=a2[j];
    
    sort(c,c+m+n);
    for(int i=0;i<m+n;i++)
     cout<<c[i]<<" ";
    
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
