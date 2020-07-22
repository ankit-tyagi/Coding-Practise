#include<bits/stdc++.h>


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l,m,h;
        l=0;
        m=0;
        h=nums.size();
        h--;
        while(m<=h)
        {
            if(nums[m]==0)
            {
                nums[m]=nums[l];
                nums[l]=0;
                m++;
                l++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else
            {
                nums[m]=nums[h];
                nums[h]=2;
                h--;
            }
        }
        
    }
};