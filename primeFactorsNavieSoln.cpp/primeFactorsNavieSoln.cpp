#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n==1)return false;
    if(n==2 || n==3)return true;
    if(n%2==0 || n%3==0)return false;
    for(int i=5;i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)return false;
    }
    return true;
}

void primeFactors(int n)
{

    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            int x=i;
            while(n%x==0)
            {
                cout<<i<<"\n";
                x=x*i;
            }
        }
    }
}
int main()
{
    int n=12;
    primeFactors(n);
    return 0;
}
