#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>>t;
    for(int i=0;i<t;i++){
    long long s, k, m;
    cin >> s >> k >> m;

    long long ans;
    if (m < k) {
        
        ans = max(0LL, s - m);
    } else {
        
        long long sand_at_last_flip = min(s, k);
        long long time_since_last_flip = m % k;
        ans = max(0LL, sand_at_last_flip - time_since_last_flip);
    }
    cout << ans << "\n";
}
}

