#include<iostream>

using namespace std;


int main()
{
    int arr[]={2,7,3,9,4,6,1};

      int n=sizeof(arr)/sizeof(arr[0]);

      for(int i=0;i<n;i++)
      {
          for(int j=i+1;j<n;j++)
          {
              if(arr[i]+arr[j]==5)
              {
                  cout<<"("<<arr[i]<<","<<arr[j]<<")";

              }
          }
      }

    return 0;
}
