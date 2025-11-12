#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n,x;
        cin>>n;
        vector<int> v(n);
        for (int i=0;i<n;i++) {
            cin>>v[i];
        }
    cin>>x;

        bool ok = false;

    // for (int i=0;i+1<n;i++) {
    //     if (min(v[i],v[i+1])<=x && max(v[i],v[i+1])>=x) {
    //        ok = true;break;
    //
    //     }
    // }
        int minVal = *min_element(v.begin(), v.end());
        int maxVal = *max_element(v.begin(), v.end());

        if (x >= minVal && x <= maxVal)
            cout << "Yes\n";
        else
            cout << "No\n";



// if (ok) {
//     cout<<"Yes"<<endl;
// }
//         else {
//             cout<<"No"<<endl;
//         }


    }

}
