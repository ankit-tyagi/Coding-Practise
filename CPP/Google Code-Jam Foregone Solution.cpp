#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int testcase = 0;
    while(t--)
    {
        long n=0;
        //cout<<"    enter number"<<"  ";
        cin>>n;
        long a,b;
        
        a = n;
        b = 0;
        int loopno = -1;
        int remainder = 0 ;
        int power=0;
        while(n>0)
        {
            loopno++;
            power = 0;
            remainder = n % 10;
          //  cout<<" remainder "<<remainder<<" ";
            n=n/10;
            if(remainder == 4)
            {
                power = (long)(pow(10, loopno)+0.5);
            //    cout<<"power "<<power<<"  ";
                a = a - power;
                b = b + power;
            //    cout<<" a= "<<a<<" b="<<b;
            }
        }
        testcase++;
        cout<<"Case #"<<testcase<<": "<<a<<" "<<b<<endl;
    }

    return 0;
}