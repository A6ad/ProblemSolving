#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    

    for(char &c:s1)
    {
        if(c>='A' && c<='Z')
        c = c + 32;
    }
    for(char &c:s2)
    {
        if(c>='A' && c<='Z')
        c = c + 32;
    }
    
    if(s1<s2)
    {
        cout<< -1 <<endl;
    }
    else if(s1 > s2)
    {
        cout<< 1 <<endl;
    }
    else 
    {
        cout<< 0 <<endl;
    }
    return 0;
}