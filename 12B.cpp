#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    vector<int> v1;
   
    int count = v.size();

    for(int i=0;i<count;i++)
    {
        int x = n % 10;
        v.push_back(x);
        n =  n /10;
    }
    reverse(v.begin(),v.end());
   
    for(int i=0;i<count;i++)
    {
        int y = m % 10;
        v1.push_back(y);
        m /= 10;
    }
    v.erase(std::remove(v.begin(), v.end(), 0), v.end()); // remove an 0 from the array
    v.erase(std::remove(v.begin(), v.end(), 0), v1.end());// remove 0's from the array

       
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    
      bool same = true;
    for (int i = 0; i < count; ++i) {
        if (v[i] != v1[i]) { same = false; break; }
    }
    cout << (same ? "OK\n" : "WRONG_ANSWER\n");
}
// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main() {
//     string n, m;
//     cin >> n >> m;

//     // 1. Sort the digits of n to get them in ascending order
//     sort(n.begin(), n.end());

//     // 2. Handle the leading zero case
//     // If the first digit is '0' but there are other digits, 
//     // swap '0' with the first non-zero digit.
//     if (n.length() > 1 && n[0] == '0') {
//         for (int i = 0; i < n.length(); i++) {
//             if (n[i] != '0') {
//                 swap(n[0], n[i]);
//                 break;
//             }
//         }
//     }

//     // 3. Check if the result matches Alice's answer m
//     if (n == m) {
//         cout << "OK" << endl;
//     } else {
//         cout << "WRONG_ANSWER" << endl;
//     }

//     return 0;
// }