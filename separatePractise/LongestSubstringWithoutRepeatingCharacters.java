package separatePractise;

import java.util.HashSet;

public class LongestSubstringWithoutRepeatingCharacters {


    public int lengthOfLongestSubstring(String s) {
        if(s.length() == 0)
            return 0;
        HashSet<Character> f = new HashSet<>();
        int len = s.length(), ptr1 = 0, ptr2 = 0;
        int maxSize = 1, curSize = 1;
        f.add(s.charAt(ptr1));
        ptr1++;
        while(ptr1 < len){
            if(f.contains(s.charAt(ptr1))){
                curSize--;
                f.remove(s.charAt(ptr2));
                ptr2++;
            }else{
                curSize++;
                f.add(s.charAt(ptr1));
                ptr1++;
                if(curSize > maxSize){
                    maxSize = curSize;
                }
            }
        }
        return maxSize;
    }

}
