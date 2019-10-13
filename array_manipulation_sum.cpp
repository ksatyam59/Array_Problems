#include<iostream>
#include<algorithm>


using namespace std;

int main()
{
    int A[]={12,3,6,7,8};
    int n=sizeof(A)/sizeof(A[0]);
    int k=15;

    sort(A,A+n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+A[i]*(n-i)==k)
        {
            cout<< A[i];
        }

        sum+=A[i];
    }

    return 0;
}
