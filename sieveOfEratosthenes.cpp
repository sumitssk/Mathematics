#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> sieveOfEratosthenes(int n)
{
    vector<int> ans;
    vector<bool> isPrime(n+1,true);

    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            ans.push_back(i);
            for(int j=i*i;j<=n;j=j+i)
            {
                isPrime[j]=false;
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    vector<int> ans=sieveOfEratosthenes(n);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}