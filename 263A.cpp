#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5][5];
    int dx,dy;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
           if(a[i-1][j-1])
           {
              dx = i -1 ;
              dy = j -1;
              break;
           }
        }
    }

    cout<<abs(2-(dx))+abs(2-(dy))<<endl;
    return 0;
}