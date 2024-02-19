#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long computingPower(int x,int n)
{
     if(n==0)return 1;
     long long temp=computingPower(x,n/2);
     if(n%2==0)return temp*temp;
     else return temp*temp*x;
}

int main()
{
    int x;
    cout<<"Enter the Number:";
    cin>>x;
    int n;
    cout<<"Enter the Power:";
    cin>>n;
    cout<<computingPower(x,n);
}