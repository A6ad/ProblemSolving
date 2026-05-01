//
// Created by asad on 4/30/26.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--) {
        int x,y;
        cin>>x>>y;

        if (x%2 == 1 && y%2 ==1 ) {
            cout<<"No"<<endl;
        }
        else {
            cout<<"Yes"<<endl;
        }

    }



    return 0;
}
