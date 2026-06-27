//
// Created by asad on 6/27/26.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        int n,result=0;
        cin>>n;
        for (int i=0;i<31;i+=2) {
            int evenbit = (n >> i) & 1; // right shifting >> i & 1   == gives the bits that the numbers are made of
            int oddbit = (n >> (i + 1)) & 1; //

            result |= (evenbit <<(i+1)) ;
            result |= (oddbit <<(i));
        }
        cout<<result<<"\n";
    }
    return 0;
}
