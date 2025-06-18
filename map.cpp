#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m = {{1,"geek"},{2,"for"},{3,"geeks"}};
    
    // auto it = m.find(2);

    // if(it!= m.end())
    // {
    //     cout<<it->first<<" "<<it->second;
    // }

    for(auto it = m.rbegin();it!= m.rend();it++)
    {
        cout<<it->first<<" = "<<it->second<<endl;
    }

    return 0;
}