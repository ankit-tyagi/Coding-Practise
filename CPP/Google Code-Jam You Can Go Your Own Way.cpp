#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int testcase = 0;
    while(t--)
    {
        int size = 0;
        int dimension;
        cin>>dimension;
        char str[50002];
        cin>>str;
        //gets(str);
        testcase++;
        int len = strlen(str);
        cout<<"Case #"<<testcase<<": ";
        for(int i=0; i<len ;i++)
        {
            if(str[i]=='S')
                cout<<"E";
            else
            {
                cout<<"S";
            }
        }
        cout<<endl;
        //cout<<"testcase "<<testcase<<" ends "<<endl;
    }

    return 0;
}