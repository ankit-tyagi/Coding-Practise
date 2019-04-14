#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    int x = n-1, value=0;
    while(str[x]=='0' && x>=0)
    {
        value++;
        x--;
    }
    cout<<value;
    return 0;
}