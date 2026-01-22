#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {10,20,30,40,50};

    int l =0 ;
    int r = 2;

    arr[l] = 0;
    int  idx = l + 1;
    for(int i = r + 1;i<5;i++)
    {
        arr[idx++] = arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    n = n -(r - l);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
// this algorithm deletes an specific subarray and replaces them with 0
