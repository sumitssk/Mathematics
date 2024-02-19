#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)return false;
    if(n==2 || n==3)return true;
    if(n%2==0 || n%3==0)return false;
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)return false;
    }
    return true;
}
int exactly3Divisor(int n)
{
    int count=0;
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime(i) && i*i<=n)count++;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<exactly3Divisor(n);
}