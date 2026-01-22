//
// Created by asad on 1/20/26.
//
#include <bits/stdc++.h>
using namespace std;
int findMex(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int mex = 0;
    for (int x : nums) {
        if (x == mex) {
            mex++;
        } else if (x > mex) {
            break;
        }
    }
    return mex;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        set<int> present;
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        int missing_count ;
        int k_count = 0;
        for (int i=0;i<n;i++) {
            if (a[i]==k) {
                k_count++;
            }
            if (a[i]<k) {
                present.insert(a[i]);
            }
        }
    missing_count = k - present.size();
cout<<max(missing_count,k_count)<<endl;
    }




    return 0;
}
