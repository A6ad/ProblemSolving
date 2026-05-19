//
// Created by asad on 5/19/26.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y;
    cin>>y;
    set<int> s;

    while (true) {
        y++;

        int temp = y;
        set<int> s;

        while (temp > 0) {
            s.insert(temp % 10);
            temp /= 10;
        }

        if (s.size() == 4) {
            cout << y;
            break;
        }
    }



    return 0;
}
