#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s); 

        stringstream ss(s);
        string word;

        while (ss >> word) { 
            cout << word[0]; 
        }
        cout << endl;
    }

    return 0;
}