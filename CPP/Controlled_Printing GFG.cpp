#include<bits/stdc++.h>
using namespace std;
// Function Prototype
void forkCPP(int);
//Position this line where user code will be pasted.
// Driver Code
int main(){
    
    int testcase;
    cin >> testcase;
    
    while(testcase-- > 0){
        
        int N;
        
        cin >> N;
        
        forkCPP(N);
        
    }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
// Function to print ForkCPP
// N : input number
void forkCPP(int n){
    
    if(n%15 == 0)
        cout<<"Fork CPP";
    else if(n%5 == 0)
        cout<<"CPP";
    else if(n%3 == 0)
        cout<<"Fork";
    
  
    cout << endl;  
}