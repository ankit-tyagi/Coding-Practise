#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool map[256] = {false};
        for(auto c:J)
            map[c] = true;

        int count = 0;
        for(auto c:S)
        {
            if(map[c] == true)
                count++;
        }
        return count;
        
    }
};