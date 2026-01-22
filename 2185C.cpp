#include <bits/stdc++.h>
using namespace std;
int Mex(vector<int>& a) {
    sort(a.begin(), a.end());
    int mex = 0;
    for (int x : a) {
        if (x == mex) {
            mex++;
        }
    }
    return mex;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);

        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
    int mn = *min_element(a.begin(),a.end());
        int mx = Mex(a);
        cout<<mx - mn<<endl;

        }
    }



