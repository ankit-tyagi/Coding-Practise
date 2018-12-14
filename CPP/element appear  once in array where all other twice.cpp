#include<bits/stdc++.h>

using namespace std;

int findsingle(int ar[], int len)
{
    int x = ar[0];
    for(int i=1;i<len;i++)
    {
        x=x^ar[i];
    }
    return x;
}

int main()
{
    int ar[] = {2, 3, 5, 4, 5, 3, 4, 7 , 7, 2, 15}; 
    int n = sizeof(ar) / sizeof(ar[0]); 
    cout << "Element occurring once is "<< findsingle(ar, n); 
    return 0;
}