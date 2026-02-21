//
// Created by asad on 2/20/26.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
int n;
        cin>>n;
        vector<int> arr(n);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        if (n == 1) {
            cout << (arr[0] == 67 ? "Yes\n" : "No\n");
            continue;
        }
        else if (n==2) {
            if (arr[0] == 67 || arr[1] == 67) {
                cout<<"Yes\n";
                continue;
            }
        }
        int s = arr.size();
        bool found = false;
        for (int i=0,j=s-1;i<j;i++,j--) {
            if (arr[i] * arr[j] == 67 ) {
                found = true;
                break;
            }
        }
        for (int i=0;i<s;i++) {
            if (arr[i] ==67) {
                found = true;
            }
        }
       if (found) {
           cout<<"YES"<<endl;
       }
        else {
            cout<<"NO"<<endl;
        }

    }
}


