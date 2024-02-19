#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long iterativePower(long long x,int n)
{
    long long res=1;
    while(n>0)
    {
        if(n&1)res=res*x;
        x=x*x;
        n=n>>1;
    }
    return res;
}
int main()
{
    int x,n;
    cout<<"Enter the Number:";
    cin>>x;
    cout<<"Enter the Power:";
    cin>>n;
    cout<<iterativePower(x,n);
    return 0;
}