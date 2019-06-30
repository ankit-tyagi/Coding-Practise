#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1];
        int reach[n+1];
        a[0]=reach[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            reach[i] = INT_MAX;
        }
        reach[1] = a[1];
        for(int i=1;i<=n;i++)
        {
            if((i+1)<=n)
            {
                if(reach[i+1]>(reach[i]+a[i+1]))
                    reach[i+1] = reach[i]+a[i+1];
            }
            if((i+(i%k)+1)<=n)
            {
                if(reach[i+(i%k)+1]>(reach[i]+a[i+(i%k)+1]))
                    reach[i+(i%k)+1] = reach[i]+a[i+(i%k)+1];
            }
        }
        cout<<reach[n]<<endl;
    }
    return 0;
}