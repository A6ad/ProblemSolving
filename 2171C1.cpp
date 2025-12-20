#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,x=0,idx;
        cin>>n;
        vector<int> a(n);
        for (int i=0;i<n;i++) {
            cin>>a[i];
            x ^= a[i];
        }
        vector<int> b(n);
        for (int i=0;i<n;i++) {
            cin>>b[i];
            x ^= b[i];
        }
        if (!x) {
            cout<<"Tie"<<endl;
            continue;
        }


        for (int i=0;i<n;i++) {
            if (a[i] ^ b[i]) {
                idx = i;
            }
        }
cout<<(idx & 1 ? "Mai" : "Ajisai") << endl;
    }
}