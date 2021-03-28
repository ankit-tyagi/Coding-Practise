class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> patterns = new ArrayList<>();
        traverse(patterns, "", n, 0, 0);
        return patterns;
    }
        private static void traverse(List<String> patterns, String s, int n, int i, int j) {
        if (s.length() == n*2 && n == i && n==j){
            patterns.add(s);
            return;
        }

        if (i < n){
            traverse(patterns, s + "(", n, i+1, j);
        }
        if (j < n && j < i){
            traverse(patterns, s + ")", n, i, j+1);
        }

    }
}