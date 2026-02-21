    //
    // Created by asad on 1/26/26.
    //
    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin>>t;
        while (t--) {
            long long n,s,x;
            cin>>n>>s>>x;
            vector<int> v(n);
            long long sum = 0;
            for (int i=0;i<n;i++) {
                    cin>>v[i];
                sum += v[i];
            }
           if (sum <= s && (s -sum ) % x == 0) {
               cout<<"YES"<<"\n";
           }
            else {
                cout<<"NO"<<"\n";
            }

        }
        return 0;
    }
