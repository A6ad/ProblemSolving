#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ;
    cin>>s;
    
    vector<char> numbers;
    for(int i=0;i<s.size();i+=2)
    {
       numbers.push_back(s[i]);
    }

    sort(numbers.begin(),numbers.end());


    for(int i= 0; i <numbers.size();i++)
    {
        cout<<numbers[i];
        if(i!=numbers.size()-1)
        {
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}