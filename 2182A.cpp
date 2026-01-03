#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int  t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;

        string s;
        cin>>s;
        int ans = 0;
        for (int i=0;i+1<s.length();i++) {
            if (s[i] == '2' && s[i+1] == '0' && s[i+2]=='2' && s[i+3] == '5')
                cout<<"1"<<endl;

            else if(s[i] == '2' && s[i+1] == '0' && s[i+2]=='2' && s[i+3] == '6')
                cout<<"0"<<endl;
        }
    }


    return 0;
}
