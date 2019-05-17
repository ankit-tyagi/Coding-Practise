#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void findJumps(int, int);
//Position this line where user code will be pasted.
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        long long N, X;
        cin >> N >> X;
        
        findJumps(N, X);
    }
    
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
// Function to find number of jumps
// N : number inscribed on the last stone.
// X : number on which we have to reach
void findJumps(int n, int p){
    
    if(n % 2 != 0){
            if(p%2 == 0){
                cout << min((((p-1)/2)+1), ((n-p)/2));
            }
            else
            cout << min(((p-1)/2), ((n-p)/2));
        }
        else{
            if(p%2 == 0){
                cout << min(((p-1)/2)+1, ((n-p)/2));
            }
            else
            cout << min((p-1)/2, ((n-p)/2+1));
        }
    cout << endl;
    
}