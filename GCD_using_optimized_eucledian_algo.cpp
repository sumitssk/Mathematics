#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    else 
        return gcd(b%a,a);
}

int main()
{
    int a = 12, b = 15;
    	
    	cout<<gcd(a, b);
    	
    	return 0;
}