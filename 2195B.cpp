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


       for (int i=0;i<n;i++) {
           if (i%2 == 0 && arr[i]>arr[2*i]) {
               swap(arr[i],arr[2*i]);
           }
       }


        for (int x : arr) {
            cout<<x<<" ";
        }
cout<<endl;
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
