#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   bool lol[n+1];
   memset(lol,true,sizeof(lol));
     for (int p=2; p*p<=n; p++)
    {
        if (lol[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                lol[i] = false;
        }
    }
     for (int p=2; p<=n; p++)
       if (lol[p])
          cout << p << " ";
 
}
// time complexity o(log(n))    