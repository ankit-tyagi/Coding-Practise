class Solution {
    public void reverseString(char[] s) {
        int i=0, j=s.length;
        char temp ;
        if(j==0)
            return;
        if(j%2 == 0)
        {
            j--;
            for(i=0;i<j/2 +1;i++)
            {
                temp = s[i];
                s[i] = s[j-i];
                s[j-i] = temp;
            }
        }
        else{
            j--;
            for(i=0;i<j/2;i++)
            {
                temp = s[i];
                s[i] = s[j-i];
                s[j-i] = temp;
            }
        } 
    }
}