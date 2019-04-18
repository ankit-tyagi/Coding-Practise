#include<bits/stdc++.h>

using namespace std;

double maxsubarraysum(double arr[], double n)
{
    double maxsofar = INT_MIN;
    double maxendhere=0;

    for(int i=0;i<n;i++)
    {
        maxendhere = maxendhere + arr[i];
        if(maxsofar < maxendhere)   maxsofar = maxendhere;
        if(maxendhere < 0)  maxendhere = 0;
    }
    return maxsofar;
}

int main()
{
    int n,x;
    cin>>n>>x;
    double arr[n], sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    double subsum = maxsubarraysum(arr,n);
    //cout<<subsum;

    cout<<sum - subsum + subsum/x;
}