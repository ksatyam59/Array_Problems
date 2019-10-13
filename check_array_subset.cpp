#include<iostream>
#include <bits/stdc++.h>
#include<unordered_set>


using namespace std;


int main()
{
    int A[]={5,2,9,7,1,4,6};
    int B[]={4,1,7};
    int n=sizeof(A)/sizeof(A[0]);
    int N= sizeof(B)/sizeof(B[0]);

    unordered_set <int> S1;
    unordered_set <int> S2;

    for(int i=0;i<n;i++)
    {


         S1.insert(A[i]);
    }

    for(int j=0;j<N;j++)

    {
       if(S1.find(B[j]==S1.end()))
            S1.insert(B[j]);

       else
        S2.insert(B[j]);
    }

    int x=S2.size();

    if(x<N)

        cout<<"Array is not the subset"<<endl;

    else
        cout<<"array is the subset";


    return 0;
}
