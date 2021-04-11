////n length array,
////5 4 3 2 1 4
////5 4 4 3 2 1
//
//import java.util.HashMap;
//import java.util.HashSet;
//import java.util.SortedSet;
//import java.util.TreeSet;
//
//public class practise1 {
//    static int totalBaloonLeft = 0;
//
//    public static void main(String[] args){
//        int[] arr = {5, 4, 3, 2, 1, 4};
//        int n = arr.length;//, i = n;
//        totalBaloonLeft = n;
//        int totalBulletsFired = 0;
//
////        while(i > 0){
////            int bulletHeight = findBaloonWithMaxAlivation(arr, n ); //- n
////                    if(totalBaloonLeft == 0){
////                        break;
////                    }
////            totalBulletsFired++;
////            arr= firTheBullet(arr, bulletHeight, n);                  //- n
////            i--;
////        }
//
//
//
//
//
//        SortedSet<Integer> ss;
//        HashMap<Integer, SortedSet<Integer>> hm = new HashMap<>();
//        for(int i=0;i<n;i++){
//            if(hm.get(arr[i]) == null){
//                ss = new TreeSet<>();
//                ss.add(i);
//                hm.put(arr[i],ss);
//            }else{
//                ss = hm.get(arr[i]);
//                ss.add(i);
//            }
//        }
//
//        System.out.println(totalBulletsFired);
//
//        0 1 2 3 4 5 6 7 8 9 0 1
////      4 4 5 4 5 3 3 2 2 2 3 1
////      4 4 5 4 5 3 3 2 2 2 3 1
//
//
////        [ 0, 1, 2, 3, 4, 5]
//
//
//    }
//
//    private static int[] firTheBullet(int[] arr, int bulletHeight, int n) {
//        for(int i=0;i<n;i++){
//            if(arr[i] == bulletHeight && bulletHeight != 0){
//                arr[i] = 0;
//                bulletHeight--;
//                totalBaloonLeft--;
//            }
//        }
//        return arr;
//    }
//
//    private static int findBaloonWithMaxAlivation(int[] arr, int n) {
//        int max = Integer.MIN_VALUE;
//        for(int i=0;i<n;i++){
//            if(arr[i] > max){
//                max = arr[i];
//            }
//        }
//        return max;
//    }
//
//
//}
