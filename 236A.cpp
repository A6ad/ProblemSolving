#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    string unique = "";

    for(int i=0;i<s.length();i++)
    {
        bool found = false;
        for(int j=0;j<unique.length();j++)
        {
            if(s[i] == unique[j])
            {
                found = true;
                break;
            }
        }


    if(!found)
    {
        unique += s[i];
    }
}
if(unique.length() % 2 == 0)
{
    cout<<"CHAT WITH HER!"<<endl;
}
else 
{
    cout<<"IGNORE HIM!"<<endl;
}
    return 0;
}