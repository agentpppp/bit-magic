#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long int n;
    cin>>n;
    int count=0;
    int temp=0;
    while (n>0)
    {
        n = n&(n-1);
        count++;            
    }
    cout<<count;
}