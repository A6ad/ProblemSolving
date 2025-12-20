#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        if (v[0] == -1) {
             v[0] = v[n-1] ;
        }
        if (v[n-1]== -1) {
            v[n-1] = v[0];
        }
        for (int i=0;i<n;i++) {
            if (v[i]== -1) {
                v[i] = 0;
            }
        }
        cout<<abs(v[0]-v[n-1])<<"\n";
        for (int i=0;i<n;i++) {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}
