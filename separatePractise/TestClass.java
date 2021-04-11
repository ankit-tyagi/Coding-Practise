package separatePractise;

import java.io.*;
import java.util.*;


public class TestClass {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter wr = new PrintWriter(System.out);
        int T = Integer.parseInt(br.readLine().trim());
        for(int t_i = 0; t_i < T; t_i++)
        {
            int n = Integer.parseInt(br.readLine().trim());
            int[][] s = new int[n][2];
            for(int i_s = 0; i_s < n; i_s++)
            {
                String[] arr_s = br.readLine().split(" ");
                for(int j_s = 0; j_s < arr_s.length; j_s++)
                {
                    s[i_s][j_s] = Integer.parseInt(arr_s[j_s]);
                }
            }

            long out_ = solve(n, s);
            System.out.println(out_);

        }

        wr.close();
        br.close();
    }

    static long ans = Long.MAX_VALUE;
    static void recur(int i, int j, long cs, long ts, int s[][]) {
        if (i >= s.length || j >= 2) {
            return;
        }

        long newSum = cs + s[i][j];
        ans = Math.min(ans, Math.abs(newSum - ts));
        recur(i+1, j, newSum, ts, s);
        recur(i, j+1, newSum, ts, s);
    }

    static long solve(int n, int[][] s){
        long colSum1 = 0L, colSum2 = 0L;
        long sum = 0L;
        for (int i = 0; i < n; i++) {
            sum += s[i][0] + s[i][1];
            colSum1 += s[i][0];
            colSum2 += s[i][1];
        }

        ans = colSum1 - colSum2;
        if(ans == 0){
            return 0;
        }
        if(ans > 0){
            dividearr(1, sum, colSum1, n, s);
        }
        return 0;
    }

    private static void dividearr(int i, long sum, long colSum1, int n, int[][] s) {
    }

    private static void dividearr(int i, long sum, long colSum1) {
        
    }

//        // Write your code here
//
////        ans = Long.MAX_VALUE;
//        long sum = 0L, len = s.length;
//        for (int i = 0; i < len; i++) {
//            sum += s[i][0] + s[i][1];
//        }
////
////        recur(0L, 0L, 0L, (sum+1)/2, s);
////
////        return ans;
//
//        int i=0,j=0;
//        if(s[i][j] < s[0][1])
//        {
//            i=0;j=1;
//        }
//        if(s[i][j] < s[n-1][0])
//        {
//            i=n-1;j=0;
//        }
//        if(s[i][j] < s[n-1][1])
//        {
//            i=n-1;j=1;
//        }
//        if( i==0){
//            return goDown(n,s,j, sum);
//        }
//        else
//            return goUp(n,s,j);
//
//    }
//
//    private static long goUp(int n, int[][] s, int j) {
//    }
//
//    private static long goDown(int n, int[][] s, int j, long sum) {
//        if()
//    }
}