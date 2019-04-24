#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int value=0,sum=0;
        cin>>n;
        while(n--)
        {
            cin>>value;
            sum+=value;
        }
        cout<<sum<<"\n";
    }
}