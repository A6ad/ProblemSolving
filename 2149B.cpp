#include <bits/stdc++.h>
using namespace std;
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

sort(arr.begin(),arr.end());


    int gap = 0;
    int max_gap = 0;
    for(int i=0;i<n;i+=2)
    {
        gap = arr[i+1] - arr[i];
        max_gap = max(max_gap,gap);

    }
cout<<max_gap<<endl;





    }
    return 0;
}
