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
        vector<int> original(n);
        vector<pair<int,int>> operations;

        int last_crush_index = -1;

        for (int i=0;i<m;i++) {
            int b,c;
            cin>>b>>c;
            operations[i] = {b-1,c};
            original[operations[i].first] += operations[i].second;


            if (original[operations[i].first] > h)   {
                last_crush_index = i;
            }
        }
for (int i=last_crush_index -1 ;i<m;i++) {

}
    }
     
}