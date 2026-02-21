#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr);

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long x,y;
        cin>>x>>y;
        
        int k = y/x;

        int ans = 0;
        while(k>0)
        {
            ans += k % 10;
            k /=10;
        }
        cout<<ans+y%x<<endl;
        
        
    }
}