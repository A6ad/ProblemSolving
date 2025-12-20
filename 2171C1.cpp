#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        vector<int> b(n);
        for (int i=0;i<n;i++) {
            cin>>b[i];
        }
        int result_A = 0;
        int result_B = 0;

        for (int i = 0; i < n; i++) {
            result_A ^= a[i];
        }
        for (int i = 0; i < n; i++) {
            result_B ^= b[i];
        }

    if (result_A > result_B) {
        cout<<"ajisai"<<endl;
    }
        else if (result_A < result_B) {
            cout<<"mai"<<endl;
        }
        else {
            cout<<"Tie"<<endl;
        }


 

        // if (result_A)
        // {
        //     cout<<"ajisai"<<endl;
        // }
        // else if (result_B)
        // {
        //     cout<<"Mai"<<endl;
        // }
        // else if (result_A == result_B){
        //     cout<<"Tie"<<endl;
        // }
    }
}