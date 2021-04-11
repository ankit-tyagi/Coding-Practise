package separatePractise;

import java.util.Scanner;

public class MatrixMultiplication {

    public static void main(String[] args){
        //If we take input from console
//        Scanner sc = new Scanner();
//        try{
//            while()
//            String st = sc.nextLine();
//
//        } catch (Exception e) {
//            e.printStackTrace();
//        }

        int[][] arr1 = {{1,2,3},{4,5,6},{7,8,9}};
        int[][] arr2 = {{11,12,13},{14,15,16},{17,18,19}};
        int[][] ans = {{0,0,0},{0,0,0},{0,0,0}};

        for(int i=0;i< arr1.length;i++){
            for(int j=0;j<arr1[i].length;j++){
                if(arr1[i].length != arr2.length){
                    System.out.println("The matrix cannot be multiplied, it is not in the order of i*j, j*k");
                }
                for(int k = 0;k<arr2.length;k++){
                    ans[i][j] = ans[i][j]+ (arr1[i][k]*arr2[k][j]);
                }
            }
        }

        for(int i=0;i< arr1.length;i++){
            for(int j=0;j<arr1[i].length;j++){
                System.out.print(" " + ans[i][j]);
            }
            System.out.println();
        }


    }
//    formula for multiplication = sum of (row element * column element) like  - 0,0*0,0 + 1,0*

}
