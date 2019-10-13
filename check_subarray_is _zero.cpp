#include<iostream>

using namespace std;


int main()
{   int count=0;
    int Arr[]={3,4,-7,3,1,3,1,-4,-2,-2};
    int n=sizeof(Arr)/sizeof(Arr[0]);

    int sum;

    for(int i=0;i<n;i++)
    {   sum=0;
        for(int j=i;j<n;j++)
        {


        sum=sum+Arr[j];
        if(sum==0)
        {
            count++;

            for(int k=i;k<=j;k++)
                cout<<Arr[k];
            break;


        }


        }

     cout<<endl;
    }
cout<<count;
    return 0;
}
