    //
    // Created by asad on 5/1/26.
    //
    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        long long n;
        int i;
        cin >> n;
        cin>>i;

        if (n &(1<<i)) {
            cout<<"True"<<endl;
        }
        else {
            cout<<"False"<<endl;
        }

        return 0;
    }
