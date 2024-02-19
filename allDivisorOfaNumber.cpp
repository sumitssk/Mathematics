#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> divisorofNo(int n)
{
    vector<int> ans;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0){
            ans.push_back(i);
            if(i!=(n/i))ans.push_back(n/i);
        }
  

        
    }
    return ans;
}
vector<int> divisorofNoSorted(int n)
{
    vector<int> ans;
    int i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)ans.push_back(i);
    }
    for(;i>=1;i--)
    {
        if(n%i==0)ans.push_back(n/i);
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    vector<int> ans=divisorofNo(n);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    ans=divisorofNoSorted(n);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;

}