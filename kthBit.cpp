#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if (n & (1<<(m-1))!=0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
}