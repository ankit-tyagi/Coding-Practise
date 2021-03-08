class TreeNode {
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

class goodNodes {
   public Integer ans = 0;

   public int goodNodes(TreeNode root) {
       calculate(root, Integer.MIN_VALUE);
       return ans;
   }

   private void calculate(TreeNode root, int value) {
       if(root == null){
           return;
       }
       if(root.val >= value){
           value = root.val;
           ans++;
       }
       if(root.left != null)
       {
           calculate(root.left, value);
       }
       if (root.right != null){
           calculate(root.right, value);
       }
   }

}