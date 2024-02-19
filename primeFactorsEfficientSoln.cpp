#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> primeFactors(int n)
{
    vector<int> ans;
    if(n<=1)return ans;
    while(n%2==0)
    {
        ans.push_back(2);
        n=n/2;
    }
    while(n%3==0)
    {
        ans.push_back(3);
        n=n/3;
    }
    for(int i=5;i*i<=n;i=i+6)
    {
        while(n%i==0)
        {
            ans.push_back(i);
            n=n/i;
        }
        while(n%(i+2)==0)
        {
            ans.push_back(i+2);
            n=n/(i+2);
        }
    }
    if(n>3)ans.push_back(n);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    vector<int> ans=primeFactors(n);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;

}