
#include<iostream>
#include<queue>


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

   int sum=0, result=0;
    priority_queue <int, vector<int>, greater<int> > pq;

    for(int i=0;i<n;i++)
    {
        pq.push(A[i]);
    }

    while(pq.size()>1)
    {   sum=0;
        int first=pq.top();
        pq.pop();
        int second =pq.top();

        result=result+first+second;
pq.push(first+second);
    }


    cout<<result;
    return 0;

}
