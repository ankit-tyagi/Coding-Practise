#include<bits/stdc++.h>

using namespace std;

bool areParanthesisBalanced(string expr)
{
    stack<char> s;
    char x;
    int len = expr.length();
    for(int i=0;i<len;i++)
    {
        if(expr[i]=='(' || expr[i]=='[' || expr[i]=='{' )
        {
            s.push(expr[i]);
            continue;
        }
        if (s.empty()) 
           return false; 

        switch (expr[i]) 
        {
            case ')':
                x=s.top();
                s.pop();
                if(x=='{' || x=='[')
                    return false;
                break;
            case '}':
                x=s.top();
                s.pop();
                if (x=='(' || x=='[') 
                return false; 
            break; 
  
            case ']': 
                x = s.top(); 
                s.pop(); 
                if (x =='(' || x == '{') 
                    return false; 
                break; 
        } 
    }
    return(s.empty());
}

int main()
{
    string expr = "{()}[]"; 
  
    if (areParanthesisBalanced(expr)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 
    return 0; 
}