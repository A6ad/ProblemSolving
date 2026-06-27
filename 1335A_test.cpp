//
// Created by asad on 6/24/26.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    int count = 0;
    while (t--) {
        int n;
        cin >> n;

        int count = 0;

        for (int b = 1; b < n; b++) {
            int a = n - b;

            if (a > b) {
                count++;
            }
        }

        cout << count << '\n';
    }
    return 0;
}
