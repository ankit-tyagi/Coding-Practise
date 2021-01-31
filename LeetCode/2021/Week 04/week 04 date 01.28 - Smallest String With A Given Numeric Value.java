class Solution {
    public String getSmallestString(int n, int k) {
        char[] ch = new char[n];
        Arrays.fill(ch, 'a');
        k = k-n;
        int i=n-1;
        while (k>=1){
            if(k>25){
                ch[i] = 'z';
                k = k-25;
            }else{
                ch[i] = (char) ('a'+k);
                k = 0;
            }
            i--;
        }
        return String.valueOf(ch);
    }
    public String getSmallestStringSecondSolution(int n, int k) {

        int a = k-n;
        int z = a/25;//total z
        int r = a%25;//single any char
        int s = n-z;//total a
        if(r!=0){
            s--;
        }
        System.out.println(s);
        StringBuilder sb = new StringBuilder();
        while(s>0){
            sb.append('a');
            s--;
        }
        if(r!=0){
            sb.append((char)('a'+r));
        }
        while(z>0){
            sb.append('z');
            z--;
        }
        return sb.toString();

    }
}