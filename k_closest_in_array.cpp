#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int arr[]={4,8,1,3,9,5,0};
    int x=3, k=5;


    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<k;i++)
    { int diff=x-arr[i];
      for(int j=i+1;j<n;j++)
        if(diff<x-arr[j])

        cout<<arr[j]<<" ";
    }

    //for(int i=0;i<n;i++)
      //  cout<<arr[i]<<" ";

    return 0;
}
