package separatePractise;

import java.util.Scanner;

public class SAPAssessmentProblemC {

    public static void main(String[] args) {

        // Minimum test required when the breaking current is X is given by minTestCount[2][X]
        int[][] minTestCount = new int[3][4712];
        minTestCount[2][0] = 0;
        minTestCount[2][1] = 1;

        for (int i = 0; i < 4712; i++)
            minTestCount[1][i] = i;

        for (int i = 2; i < 4712; i++) {
            minTestCount[2][i] = Integer.MAX_VALUE;
            for (int j = 1; j <= i; j++) {
                int res = 1 + Math.max(minTestCount[1][j - 1], minTestCount[2][i - j]);
                if (res < minTestCount[2][i])
                    minTestCount[2][i] = res;
            }
        }

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n != 0) {
            System.out.println(minTestCount[2][n-1]);
            n = sc.nextInt();
        }
    }
}
