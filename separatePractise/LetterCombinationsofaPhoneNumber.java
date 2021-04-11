package separatePractise;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

//Backtracking
//Input: digits = "23"
//Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
public class LetterCombinationsofaPhoneNumber {

    private static List<String> combinations = new ArrayList<>();
    private static String phoneNo = null;
    private static HashMap<Character, String> letters = null;

    public static void main(String[] args){
        letters = new HashMap<>();
        letters.put('2',"abc");
        letters.put('3',"def");
        letters.put('4',"ghi");
        letters.put('5',"jkl");
        letters.put('6',"mno");
        letters.put('7',"pqrs");
        letters.put('8',"tuv");
        letters.put('9',"wxyz");
//        letters.put('0'," ");
        System.out.println(letterCombinations("2542345"));

    }

    public static List<String> letterCombinations(String digits) {
        if(digits.length()<=0){
            return combinations;
        }

        phoneNo = digits;

        traverse(0,new StringBuilder());
        return combinations;
    }

    private static void traverse(int i, StringBuilder str) {

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
