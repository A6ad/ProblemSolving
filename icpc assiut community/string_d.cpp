#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        string a , b;
        cin>>a>>b;

        cout<<a.length()<<" "<<b.length()<<endl;
        cout<<a+b<<endl;
        char a0,b0;
        a0 = a[0];
        b0 = b[0];

        a[0] = b0;
        b[0] = a0;

       
        cout<<a<<" "<<b;
}