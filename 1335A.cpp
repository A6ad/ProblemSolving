#include<bits/stdc++.h>
using namespace std;
void bubble(long long n){
    if(n<=2){
        cout<<0<<endl;
    }
    else
    {
    long k=(n-1)/2;
    cout<<k<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t){
        long long n;
        cin>>n;
        bubble(n);
        t--;
    }
    return 0;
}