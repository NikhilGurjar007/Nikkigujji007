// Online C++ compiler to run C++ program online
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bucket_sort(float arr[],int n)
{
    float max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
           max=arr[i];
    }
    max++;
    vector<float> bkt[n];
    for(int i=0;i<n;i++)
    {
        int bi=(n*arr[i])/max;
        bkt[bi].push_back(arr[i]);
    }
    
    for(int i=0;i<n;i++)
     sort(bkt[i].begin(),bkt[i].end());
     
    int index=0;
    for(int i=0;i<n;i++)
     for(int j=0;j<bkt[i].size();j++)
     {
         arr[index]=bkt[i][j];
         index++;
     }
}

int main()
{
    float arr[]={ 897, 565, 656, 1234, 665, 3434 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=5;
    bucket_sort(arr, n);

    cout << "Sorted array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
