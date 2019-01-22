#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

void subArraySum(int arr[], int n, int sum)
{
    unordered_map<int, int> mapp;
    int currentsum = 0;
    for(int i=0;i<n;i++)
    {
        currentsum = currentsum + arr[i];

        if(currentsum == sum)
        {
            cout<<"sum as been found between 0 and "<<i;
            return;
        }

        if(mapp.find(currentsum - sum)!=mapp.end())
        {
            cout<<"sum has been found between "<< mapp[currentsum - sum] + 1<<"and "<<i<<endl;
            return;
        }
        mapp[currentsum] = i;
    }

    cout<<"No subarray with given sum exist";
    return ;
}

int main()
{
    int arr[] = {10, 3, -2, -20, 10}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = -9; 
  
    subArraySum(arr, n, sum); 
    return 0;
}