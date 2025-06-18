#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int flag = 1;
 while(n != 0)
 {
    int digit;
    digit = n %10;
    if(digit != 7 && digit != 4)
    {
        flag = 0;
        break;
    }
  n = n / 10;
 }
 if(flag)
 {
    cout<<"YES"<<endl;
 }
 else 
 {
    cout<<"NO"<<endl;
 }
    return 0;
}