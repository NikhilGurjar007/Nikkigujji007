// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void counting_sort(int arr[],int n,int k)
{
    int count[k]={0};
    
    for(int i=0;i<n;i++)
     count[arr[i]]++;
    
    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<count[i];j++)
        {
            arr[index]=i;
            index++;
        }
    }
}


int main() {
    int arr[]={1,4,4,1,0,1};
    int k=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    counting_sort(arr,n,k);

    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    return 0;
}
