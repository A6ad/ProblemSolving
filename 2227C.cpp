//
// Created by asad on 4/30/26.
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
        cin >> n;

        vector<int> both, two, none, three;

        for (int i=0;i<n;i++) {
            int x;
            cin>>x;

            if (x % 6 == 0) both.push_back(x);
            else if (x % 2 == 0) two.push_back(x);
            else if (x % 3 == 0) three.push_back(x);
            else none.push_back(x);
        }

        vector<int>ans;
        for (int x : both) ans.push_back(x);
        for (int x : two) ans.push_back(x);
        for (int x : none) ans.push_back(x);
        for (int x : three) ans.push_back(x);

        for (int p:ans)
        {
            cout<<p<<" ";
        }
        cout<<endl;
    }
}