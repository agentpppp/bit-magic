#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        count = count^a[i];   
    }
    pow(2,3);
    cout<<count;
    return 0;
    
}