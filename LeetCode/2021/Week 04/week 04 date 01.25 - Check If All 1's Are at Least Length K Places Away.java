class Solution {
    public boolean kLengthApart(int[] nums, int k) {
        int last=-1, i=0;
        int s = nums.length;
        for(i=0;i<s;i++){
            if(nums[i] == 1){
                if(last == -1 || i-last-1>=k){
                    last = i;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
}