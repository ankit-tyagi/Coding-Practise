#include<bits/stdc++.h>

using namespace std;

int getMaxArea(int hist[], int len)
{
    stack <int> s;
    int maxarea=0, stacktop=0, areawithstacktop=0;

    int i=0;
    while(i<len)
    {
        if(s.empty() ||  hist[s.top()] <= hist[i])
            s.push(i++);
        else
        {
            stacktop = s.top();
            s.pop();

            areawithstacktop = hist[stacktop] * (s.empty() ? i : i-s.top() -1);

            if(maxarea < areawithstacktop)
                maxarea = areawithstacktop;
        }
    }

    while(s.empty() == false)
    {
        stacktop = s.top();
        s.pop();

        areawithstacktop = hist[stacktop] * (s.empty() ? i : i-s.top() -1);

        if(maxarea < areawithstacktop)
            maxarea = areawithstacktop;
    }

    return maxarea;

}

int main() 
{ 
    int hist[] = {6, 2, 5, 4, 5, 1, 6}; 
    int n = sizeof(hist)/sizeof(hist[0]); 
    cout << "Maximum area is " << getMaxArea(hist, n); 
    return 0; 
} 