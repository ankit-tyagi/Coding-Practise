#include<bits/stdc++.h>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int temp = 0;
        for(int i=0; i <n;i++)
        {
            temp = (abs(nums[i])%n)-1;
            if(temp<0)
                temp = n-1;
            nums[temp] = nums[temp] + n;
        }
        for(int i=0; i<n ;i++)
        {
            if(nums[i] > 2*n)
                return i+1;
        }
        return -1;
    }
};