package separatePractise;

import java.util.ArrayList;
import java.util.List;

public class subsets {

    public static void main(String[] args){
        System.out.println(subsets(new int[]{1, 2, 3}));
    }

    public static List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        ArrayList<Integer> current = new ArrayList<>();
        traverse(nums, ans, 0, current);
        return ans;
    }

    private static void traverse(int[] nums, List<List<Integer>> ans, int i, ArrayList<Integer> current) {

        if(i == nums.length) {
            ans.add(new ArrayList<>(current));
            return;
        }

        // without
        traverse(nums, ans, i+1, current);

        // with
        current.add(nums[i]);
        traverse(nums, ans, i+1, current);
        current.remove(Integer.valueOf(nums[i]));
    }
}
