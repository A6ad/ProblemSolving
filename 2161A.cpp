#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
int r0,x,d,n;
cin>>r0>>x>>d>>n;
    int ans = 0;
    int curr_rating = r0;
    string s ;
    cin>>s;
for(int i=0;i<n;i++)
    {
    if(s[i]=='1') {
        ans+=1;
        curr_rating = max(0,curr_rating-d); // vasya can adopt a strategy,strategy is we dont take points from div 1
    }
    else {
        if (curr_rating < x) {
            ans+= 1;
            curr_rating = min(curr_rating+d,x-1);
        }
    }

    }
    cout<<ans<<endl;
        }
}