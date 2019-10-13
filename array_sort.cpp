#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> vec;
   vec.push_back(6);
   vec.push_back(65);
   vec.push_back(12);
   vec.push_back(9);
   vec.push_back(3);
   vector<int>:: iterator it;


   sort(vec.begin(),vec.end());

   for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";



   return 0;

}
