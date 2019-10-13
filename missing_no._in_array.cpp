#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    int A[]={5,3,7,9,1,8,4,6,10};

  int sum=0, sum1=0;
    int n=sizeof(A)/sizeof(A[0]);

    for(int i=1;i<=10;i++)
    {
        sum=sum+i;
    }
    for(int i=0;i<n;i++)
    {
        sum1=sum1+A[i];
    }

    cout<<"missing no. is="<<sum-sum1;

    return 0;
}
