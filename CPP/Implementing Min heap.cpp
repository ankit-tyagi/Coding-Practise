#include<bits/stdc++.h>

using namespace std;

void min_heapify(int a[], int i, int len)
{
    int j, temp;
    temp = a[i];

    j=2*i;
    while(j<=len)
    {
        if(j<=len && a[j+1] <a[j])
            j=j+1;

        if(temp<a[j])
            break;

        else if (temp >= a[j])
        {
            a[j/2] = a[j];
            j = 2 * j;
        }

    }

    a[j/2] = temp;
    return;
}

void build_minheap(int a[], int len)
{
    int i;
    for(int i=len/2;i>=1;i--)
    {
        min_heapify(a,i,len);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements in an array   \n";
    cin>>n;

    int a[100];
    for(int i=1;i<=n;i++)
    {
        cout<<"enter element"<<(i)<<endl;
        cin>>a[i];
    }
    build_minheap(a,n);
    for (int i = 1; i <= n; i++)
    {
        cout<<a[i]<<"   ";
    }
    return 0;
}