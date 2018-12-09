#include<bits/stdc++.h>

using namespace std;
 
int maxSubArraySum(int a[], int n)
{
    int totalmax = INT_MIN;
    int endingmax = 0;
    for(int i=0;i<n;i++)
    {
        endingmax = endingmax + a[i];
        if(totalmax < endingmax)
            totalmax = endingmax;
        if(endingmax < 0)
            endingmax = 0;
        
    }

    return totalmax;
}

int main()
{ 
   int a[] =  {-2, -3, 4, -1, -2, 1, 5, -3}; 
   int n = sizeof(a)/sizeof(a[0]); 
   int max_sum = maxSubArraySum(a, n); 
   cout << "Maximum contiguous sum is " << max_sum; 
   return 0; 

} 
