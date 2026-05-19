//
// Created by asad on 5/2/26.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[4] = {0,3,2,4};

    set<int> s;
    for (int i=0;i<n;i++) {
        s.insert(arr[i]);
    }
    int mex = -1;

    for (int i=0;i<4;i++) {
        if (s.find(i) == s.end()) {
            mex = i;
            break;
        }
    }
cout<<mex<<endl;
    return 0;
}
