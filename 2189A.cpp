#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;
        if (h>l) {
            swap(h,l);
        }

       int x;
    int counth=0,countl= 0;
    for (int i = 0; i < n; i++) {
        cin>>x;
        if (x<=h)
            counth++;
        if (x<=l)
            countl++;
    }
cout<<min(counth,countl/2)<<endl;
    }
    return 0;
}
