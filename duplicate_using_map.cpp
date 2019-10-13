#include<iostream>
#include<map>


using namespace std;


int main()
{
    map <int,int>M;
    M.insert(pair <int,int> (3,60));
    M.insert(pair <int,int> (4,31));
    M.insert(pair <int,int> (1,50));
    M.insert(pair <int,int> (3,60));
    map <int,int>:: iterator it;

    for(it=M.begin(); it!=M.end();it++)
    {
        cout<<it->first<<"=>"<<it->second<<endl;
    }

    return 0;
}
