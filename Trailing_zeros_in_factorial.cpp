#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countTrailingZeros(int n)
{
    int ans=0;

    for(int i=5;i<=n;i=i*5)
    {
        ans=ans+(n/i);
    }
    return ans;
}

int main()
{
    int number=251;

    cout<<countTrailingZeros(number);

    return 0;
}