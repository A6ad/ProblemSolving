#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin>>t;
    while(t--) {
        string s,res="";
        cin>>s;

        int countY = 0;
        for (char c : s) {
            if (c=='Y')
                countY++;
        }

if (countY >=2 ) {
    cout<<"NO"<<endl;
}
        else {
            cout<<"YES"<<endl;
        }



            }

    return 0;
}
