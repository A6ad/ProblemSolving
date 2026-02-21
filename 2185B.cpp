#include<bits/stdc++.h>
using namespace std;
int main()

{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n,m,h;
        cin>>n>>m>>h;
        vector<int> a(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> secondary_array = a;

        vector<pair<int,int>> operations(m);

        int last_crush_index = -1;

        for (int i=0;i<m;i++) {
            int b,c;
            cin>>b>>c;
            int idx =b-1;
            operations[i] = {idx,c};
            secondary_array[idx] += c;


            if (secondary_array[idx] > h)   {
                last_crush_index = i;
                secondary_array = a;
            }
        }
for (int i=last_crush_index + 1 ;i<m;i++) {
    a[operations[i].first] += operations[i].second;
}
        for (int x : a) {
            cout<<x<<" ";
        }
    cout<<endl;
    }


}