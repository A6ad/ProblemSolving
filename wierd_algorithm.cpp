#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> v;
    v.push_back(n);
    while(true){
        if(n == 1)
        {
            break;
        }
    else if(n % 2 !=0)
    {
        n = n * 3 +1 ;
        v.push_back(n);
    }
    else{
        n/=2;
        v.push_back(n);
    }
    
    }
    for(long long c : v)
    {
        cout<<c<<" ";
    }
}