class Solution {
    public int concatenatedBinary(int n) {
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

    //Better solution
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