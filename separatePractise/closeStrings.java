package separatePractise;

import java.util.ArrayList;
import java.util.Arrays;

public class closeStrings {
    public static void main(String[] args){
        System.out.println(closeStrings("cabbba","abbccc"));
    }

    public static boolean closeStrings(String word1, String word2) {

        int n = 26;

        int arr1[] = new int[n];
        int arr2[] = new int[n];

        for(char ch : word1.toCharArray()){
            arr1[ch - 'a']++;
        }
        for(char ch : word2.toCharArray()){
            arr2[ch - 'a']++;
        }

        for (int i = 0; i < n; i++) {
            if (arr1[i] == arr2[i]) {
                continue;
            }
            if (arr1[i] == 0 || arr2[i] == 0) {
                return false;
            }
        }

        Arrays.sort(arr1);
        Arrays.sort(arr2);
        for (int i = 0; i < n; i++) {
            if (arr1[i] != arr2[i]) {
                return false;
            }
        }
        return true;

    }
}
