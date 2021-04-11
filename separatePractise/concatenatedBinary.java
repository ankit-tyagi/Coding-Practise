package separatePractise;

import java.util.Date;

public class concatenatedBinary {

    public static void main(String[] args){
        int i = 100;
        System.out.println("   " + new Date().getTime());
        System.out.println(concatenatedBinary(i) + "   " + new Date().getTime());
        System.out.println(concatenatedBinarySecondSolution(i) + "   " + new Date().getTime());
    }

    public static int concatenatedBinary(int n) {

//        StringBuilder s = new StringBuilder();
//        for(int i=1;i<=n;i++){
//            s.append(Integer.toBinaryString(i));
//        }
//        System.out.println(s);
//        if(s.length() > 65)
//            return (int) (Long.parseUnsignedLong(String.valueOf(s.subSequence(s.length()-63,s.length())),2) % 1000000007);
//        else
//            return (int) (Long.parseUnsignedLong(String.valueOf(s),2) % 1000000007);

        int m = 1000000007;
        int a=0;
        int result = 0;
        for(int i=1;i<=n;i++){
            String str = Integer.toBinaryString(i);
            for(char ch: str.toCharArray()){
                a = ch=='0'?0:1;
                result = ((result*2)%m + a)%m;
            }
        }
        return result;

    }


    public static int concatenatedBinarySecondSolution(int n) {
        final int MOD = 1000000007;
        long sum = 0;
        for (int i = 1; i <= n; ++i) {
            int num = i;
            while (num != 0) {
                num >>= 1;
                sum <<= 1;
            }
            sum = (sum + i) % MOD;
        }
        return (int)sum;
    }

}
