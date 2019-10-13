#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;


int main()
{
    int A[]={2,5,6,3,7,8,5,};
    int n=sizeof(A)/sizeof(A[0]);

    vector<int>V1;
    vector<int>V2;
     int x=1;
     // store odd and even position element in different array
    for(int i=0;i<n;i++)
    {
        if(x%2==0)
        {
          V1.push_back(A[i]);
        }

        else
          V2.push_back(A[i]);
          x++;
    }
// sort the both array separtly
     sort(V1.begin(),V1.end());
     sort(V2.begin(),V2.end());
      int k=0;
      vector<int>:: iterator it1, it2;

//again store in the main array
      for(it1=V1.begin();it1!=V1.end();it1++)
      {
          A[k++]=*it1;
      }

      for(it2=V2.begin();it2!=V2.end();it2++)
      {
          A[k++]=*it2;
      }

// print the final array
for(int i=0;i<n;i++)
{
    cout<<A[i];
}

    return 0;
}
