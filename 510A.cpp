//
// Created by asad on 6/19/26.
//


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++) {
        if (i%2 == 0)
        {
            for (int x =0; x<m;x++) {
                cout<<"#";
            }
        }
        else if (i%4==1) {
            for (int y=1;y<m;y++) {
                cout<<".";
            }
            cout<<"#";
        }
        else {
            cout<<"#";
            for (int x2 =1; x2<m;x2++) {
                cout<<".";
            }
        }
        cout<<"\n";
    }
    return 0;
}
