#include<iostream>
#include<vector>

using namespace std;


void binary(int n)

{
    int arr[10];
    int c=0;
    while(n>0)
    {

      int  rem=n%2;
        arr[c++]=rem;
        n=n/2;
    }


    for(int i=c;i>0;i--)
        cout<<arr[i]<<" ";
}
int main()
{
    int n=6;

    binary(6);

    return 0;
}
