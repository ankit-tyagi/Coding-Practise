class Solution {
    //Backtracking solution
    private List<String> combinations = new ArrayList<>();
    private String phoneNo = null;
    private HashMap<Character, String> letters = null;
    
    public List<String> letterCombinations(String digits) {
        
        if(digits.length()<=0){
            return combinations;
        }

        letters = new HashMap<>();
        letters.put('2',"abc");
        letters.put('3',"def");
        letters.put('4',"ghi");
        letters.put('5',"jkl");
        letters.put('6',"mno");
        letters.put('7',"pqrs");
        letters.put('8',"tuv");
        letters.put('9',"wxyz");
        
        phoneNo = digits;

        traverse(0,new StringBuilder());
        return combinations;
    }

    private void traverse(int i, StringBuilder str) {

        if(phoneNo.length() == str.length()){
            combinations.add(str.toString());
            return;
        }

        for(int j=0;j<(letters.get(phoneNo.charAt(i)).length());j++){

            str = str.append(letters.get(phoneNo.charAt(i)).charAt(j));
            traverse(i+1,str);
            str.deleteCharAt(i);
        }
    }
}