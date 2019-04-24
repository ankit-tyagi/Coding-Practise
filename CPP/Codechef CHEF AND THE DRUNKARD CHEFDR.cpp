#include<bits/stdc++.h>

#define mod 1000000007

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long a = (long) pow(n/2,2);
        cout<<(a+n-n/2)%mod<<endl;

        //int m=n/2;
        //long x = ((m%mod)*((m+1)%mod))%mod;

        //if(n&1){
        //    x++;
        //    x=x%mod;
        //}
        //cout<<x<<"\n";
    }
} 