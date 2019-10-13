#include<iostream>
#include<set>


using namespace std;


int main()
{
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    set <int>S;

    for(int i=0;i<n;i++)
    {
        S.insert(A[i]);
    }
    set<int>::iterator it;

    for(it= S.begin();it!=S.end();it++)

        cout<<*it;

    return 0;

}
