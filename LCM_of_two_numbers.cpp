#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(a==0)return b;
    return gcd(b%a,a);
}

int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}

int main()
{
    int a = 12, b = 15;
    	
    	cout<<lcm(a, b);
    	
    	return 0;
}