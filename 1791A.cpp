//
// Created by asad on 6/10/26.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    string s = "codeforces";
    int t;
    cin>>t;
    while (t--) {
        char c;
        cin>>c;
        bool found = false;
        for (char x:s) {
            if (x == c ) {
                found = true;
                break;
            }
        }
    if (found) {
        cout<<"Yes"<<"\n";
    }
        else {
            cout<<"No"<<"\n";
        }
    }

}
