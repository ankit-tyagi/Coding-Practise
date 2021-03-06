class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> input = new ArrayList<>();
//        Collections.addAll(input, nums);
        for (int num: nums){
            input.add(num);
        }
        traverse(input, ans, nums.length, 0);
        return ans;
    }
    
    private static void traverse(List<Integer> input, List<List<Integer>> ans, int length, int i) {
        if (i == length){
            ans.add(new ArrayList<>(input));
            return;
        }

        for(int j=i;j<length;j++){
           Collections.swap(input, i, j);

            // swap(input, i, j);

            traverse(input, ans, length, i+1);
            // swap(input, i, j);
           Collections.swap(input, i, j);
        }
    }
    
    private void swap(List<Integer> input, int i, int j) {
        int temp1 = input.get(i);
        input.set(i, input.get(j));
        input.set(j, temp1);

    }
}