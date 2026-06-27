//
// Created by asad on 6/10/26.
//
#include <bits/stdc++.h>
using namespace std;
bool isSorted(const vector<int> &arr,int n) {
    for (int i=0;i<n-1;i++) {
        if (arr[i]>arr[i+1])
            return false;
    }
return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    vector<int> v;
    while (t--) {
        int n,k;
        vector<int> v(n);
        cin>>n>>k;

        v.resize(n);

        for (int i=0;i<n;i++) {
           cin>>v[i];
        }
if (isSorted(v,n)||k > 1) {
    cout<<"YES"<<endl;
}
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
