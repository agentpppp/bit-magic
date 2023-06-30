#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    int po= pow(2,n);
    for (int i = 0; i < po; i++)
    {
       for (int j = 0; j <n; j++)
       {
          if (i&(1<<j))
          {
             cout<<s[j];
          }
          
       }
       cout<<" ";
    }
}