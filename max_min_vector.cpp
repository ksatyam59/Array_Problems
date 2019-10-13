#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v1;
    vector <int>:: iterator it;
    v1.push_back(4);
     v1.push_back(8);
      v1.push_back(7);
       v1.push_back(3);
        v1.push_back(9);
  //  int min=v1[0];
    //int max=v1[0];

    //for(it=v1.begin();it!=v1.end();++it)
   /* {
        if(*it<min)
            min=*it;
            else if(*it>max)
                max=*it;

    }*/


    cout<<"min="<<*min_element(v1.begin(),v1.end())<<endl;
    cout<<"max="<<*max_element(v1.begin(),v1.end());

    return 0;


}
