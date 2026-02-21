#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
   
    

    map<long long,int>mp;

    for(long long i=0;i<n-1;i++)
    {
        long long x;
        cin>>x;
        mp[x]++;
    }

    for(long long i=1;i<=n;i++)
    {
        if(mp[i] == 0)
        {
            cout<<i;
            break;
        }
    }
}