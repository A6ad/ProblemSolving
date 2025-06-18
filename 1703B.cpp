#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    string s;
    cin>>n>>s;
        set<char> s1;
        int ballon_count = 0;
        for(char c: s)
        {
            if(s1.count(c))
            {
                ballon_count += 1;
            }
            else
            {
                ballon_count += 2;
                s1.insert(c);
            }
        }
        cout<<ballon_count<<endl;
    }
    return 0;
}