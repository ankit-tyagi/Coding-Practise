#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <vector>
#include <queue>
#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int solve(int n)
{
    bool prime[n+1];
    int count =0;
    memset(prime,true,sizeof(prime));
    //for(int i=0;i<=n;i++)
    //    cout<<prime[i];
    for(int i=2;i*i<=n;i++)
    {
        //cout<<"i = "<<i;
        if(prime[i]==true)
        {   //count++;
            for(int j=i*i;j<=n;j=j+i)
                prime[j]=false;
        //    cout<<"   j    "<<j<<" "<<prime[j];}
           // cout<<i;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
           {
               //cout<<i<<"   ";
               count++;
           } 
    }
    return count;
}
int main()
{
	int i, j;
	cin>>i>>j;
	cout<<solve(i+j);
	return 0;
}

