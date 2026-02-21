//
// Created by asad on 2/21/26.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int  t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }

        for (int i=0,j=arr.size()-1;i<j;i++,j--) {
            if (arr[i]>arr[j]) {
                swap(arr[i],arr[j]);
            }
        }
        int s = arr.size();

        vector<int> arr2(s);
        arr2 = arr;
        sort(arr2.begin(),arr2.end());
        if (arr == arr2) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
