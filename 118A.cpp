#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string  s;
    cin>>s;
    string ans ;
    for (int i=0;i<s.size();i++) {

        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            // do nothing cause its vowel
        }
        else {
            ans += ".";
            ans += c;
        }
    }
        cout<<ans<<endl;


    return 0;
}
