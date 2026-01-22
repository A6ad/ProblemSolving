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
        int x,y;
        cin>>x>>y;

        int k = 0;
        if(y/x*10 > 1)
        {
            x = x * 10;
            k++;
        }
        else 
        {
            y = y - x;
            k = y/ x;
        }
        cout<<k<<endl;
    }
}