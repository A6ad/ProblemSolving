//
// Created by asad on 4/5/26.
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++) {
                cin>>a[i];
        }
int mx =0;
        for (int i=0;i<n;i++) {
            mx = max(mx,a[i]);
        }
        //cout<<mx<<endl;

        int count = 0;
        for (int i=0;i<n;i++) {
            if (a[i]==mx) {
                count++;
            }
        }
cout<<count<<endl;

    }
}