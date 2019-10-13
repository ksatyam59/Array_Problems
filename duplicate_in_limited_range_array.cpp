#include<iostream>

using namespace std;


int main()
{
    int A[]={1,2,3,4,5,6,7,8,8};
    int n=sizeof(A)/sizeof(A[0]);

    int sum1=0, sum2=0;

    for(int i=1;i<n;i++)
    {
        sum1=sum1+i;
    }

    for(int j=0;j<n;j++)
    {
        sum2=sum2+A[j];
    }

    cout<<"duplicate no. is"<<sum2-sum1;

    return 0;
}
