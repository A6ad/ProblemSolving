#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int count = 0;
        int zero_count = 0;
        int even_count=0;

        for (int i=0;i<n;i++) {
            if(arr[i] == -1) {
                even_count++;
            }
            else if (arr[i] == 0) {
                zero_count++;
            }
        }
if (even_count % 2 == 0) {
    cout<<zero_count<<endl;
}
        else {
            cout<<2+zero_count<<endl;
        }


    }
}
