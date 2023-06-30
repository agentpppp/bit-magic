#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int temp=n&(n-1);
     if (temp==0)
     {
        cout<<"YES"<<endl;
     }
     else
     {
        cout<<"NO"<<endl;
     }
     
     
}