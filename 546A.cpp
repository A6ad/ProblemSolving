#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(NULL);
     cin.tie(NULL);

     int k,n,w;
     cin>>k>>n>>w;
    int sum = 0;
    for(int i=0;i<=w;i++)
    {
        sum += k * i;

    }
    cout<<sum - n<<endl;
}