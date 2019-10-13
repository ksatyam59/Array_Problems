#include<iostream>


using namespace std;


int main()
{
    int N, x;
    int a[10],b[10];
    cout<<"Enter value of N and x=";
    cin>>N>>x;

    cout<<"\nenter element in the array";
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<N;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<x;i++)
    {
        b[i]=a[i];
    }

    for(int j=x;j>0;j--)
    {
        for(int i=0;i<N-x;i++)

        a[i]=a[i+1];

    }
    int c=0;

    for(int i=N-x;i<N;i++)
    {
        a[i]=b[c++];
    }
     for(int i=0;i<N;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
