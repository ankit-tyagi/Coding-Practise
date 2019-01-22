#include<bits/stdc++.h>

using namespace std;

void subArraySum(int arr[], int n, int sum)
{
    int currentsum = arr[0];
    int start = 0;
    int i;
    for( i = 1 ; i <= n ; i++ )
    {
        while(currentsum > sum && start < i-1)
        {
            currentsum = currentsum - arr[start];
            start++;
        }
        if(currentsum == sum)
        {
            cout<<"sum is between indices "<<start<<" & "<< i-1;
            return;
        }
        if(i<n)
            currentsum = currentsum + arr[i];
    }
    cout<<"No subarray found";
    return;
}

int main()
{
    int arr[15] = {15, 2, 4, 5, 8, 9, 5, 10, 23, 6, 22};
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 23; 
    subArraySum(arr, n, sum); 
    return 0;
}

/*

#include<bits/stdc++.h>

using namespace std;

int subArraySum(int arr[], int n, int sum)
{
    int currentsum = arr[0], start = 0, i;
    for(i = 1; i<=n;i++)
    {
        while(currentsum > sum && start < i-1)
        {
            currentsum = currentsum - arr[start];
            start++;
        }
        if(currentsum == sum)
        {
            cout<<"sum is between indices "<<start<<" & "<< i-1;
            return 1;
        }
        if(i<n)
            currentsum = currentsum + arr[i];
    }
    cout<<"No subarray found";
    return 0;
}

int main()
{
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 23; 
    subArraySum(arr, n, sum); 
    return 0;
}
*/

