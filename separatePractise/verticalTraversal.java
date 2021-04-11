package separatePractise;

import java.util.*;
import java.util.stream.Collectors;

public class verticalTraversal {

    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode() {}
        TreeNode(int val) { this.val = val; }
        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    public static void main(){

    }


    public List<List<Integer>> verticalTraversal(TreeNode root) {

        List<List<Integer>> result = new ArrayList<List<Integer>>();

        Integer min=0, max=0;
        Map<String, Integer> m = new HashMap<>();
        m.put("min", 0);
        m.put("max", 0);
        findDimensions(root, min, max, 0, m);
        min = m.get("min");
        max = m.get("max");
        int i = 0, j=0;
        for(i=min; i<=max; i++, j++){
            result.add(new ArrayList<Integer>());
            traverse(root, result, 0, i, j);
            Object[] r = result.get(j).toArray();
            Arrays.sort(r);

            List<Integer> collect = null;//(List<Integer>) Arrays.asList(r);
            result.get(j).clear();
            result.get(j).addAll(collect);
        }

        return result;
    }

    private void findDimensions(TreeNode root, Integer min, Integer max, int currentLoc, Map<String, Integer> map) {
        if(root == null)
            return;
        if(root.left != null)
            findDimensions(root.left, min, max, currentLoc-1, map);
        if(root.right != null)
            findDimensions(root.right, min, max, currentLoc+1, map);

        if(currentLoc < min){
            min = currentLoc;
            map.put("min", min);
        }

        if(currentLoc > max){
            max = currentLoc;
            map.put("max", max);
        }
    }

    private void traverse(TreeNode root, List<List<Integer>> result, int currentPosition, int position, int insertAt) {
        System.out.println("currentPosition -> " + currentPosition);
        if(root == null)
            return;
        if(root.left != null)
            traverse(root.left, result, currentPosition-1, position, insertAt);
        if(root.right != null)
            traverse(root.right, result, currentPosition+1, position, insertAt);
        if(currentPosition == position)
            result.get(insertAt).add(root.val);
    }

}
