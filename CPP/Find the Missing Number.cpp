#include<bits/stdc++.h>

using namespace std;

int getMissingNo(int a[], int l)
{
    int total;
    total = ((1 + l+1)*(l+1))/2;
    for (int i = 0; i< l; i++) 
       total -= a[i];
    return total;
}

int main()
{
    int a[] = {1,2,4,5,6}; 
    int miss = getMissingNo(a,5); 
    printf("%d", miss); 
    return 0;
}