// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void counting_sort2(int arr[],int n,int k)
{
    int count[k]={0};
    for(int i=0;i<n;i++)
       count[arr[i]]++;
    
    for(int i=0;i<k;i++)
      count[i]=count[i]+count[i-1];
    
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[ count[ arr[i] ] -1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
      arr[i]=output[i];
}


int main() {
    int arr[]={1,4,4,1,0,1};
    int k=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    counting_sort2(arr,n,k);

    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    return 0;
}
