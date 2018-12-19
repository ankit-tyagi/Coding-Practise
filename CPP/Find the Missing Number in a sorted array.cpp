#include<bits/stdc++.h>

using namespace std;

int getMissingNo(int ar[], int l)
{
    int a=0, b=l-1;
    int mid;
    while(b-a>1)
    {
        mid = (a+b)/2;
        if((ar[a] - a) != (ar[mid] - mid))
            b=mid;
        else if ((ar[b] - b) != (ar[mid] - mid)) 
			a = mid;
    }
    return (ar[mid] + 1);
}

int main()
{
    int a[] = {1,2,3,4,5,6,8,9,10}; 
    int size = sizeof(a) / sizeof(a[0]);
    int miss = getMissingNo(a,size); 
    printf("%d", miss); 
    return 0;
}