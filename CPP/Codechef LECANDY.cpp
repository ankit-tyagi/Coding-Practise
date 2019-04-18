#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int sum=0,k;
        int n=0;
        cin>>n>>k;
        int value;
        for(int i=0;i<n;i++)
        {
            cin>>value;
            sum=sum+value;
        }
        if(sum>=k)
            cout<<;
    }
    return 0;
}