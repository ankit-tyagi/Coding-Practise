package separatePractise;

public class canFormArray {

    public static void main(String[] args){
        System.out.println(canFormArray(new int[]{1,2,3}, new int[][]{{2},{1,3}}));
    }


    public static boolean canFormArray(int[] arr, int[][] pieces) {


        if(pieces.length == 1){
            for(int i=0;i<arr.length;i++){
                if(arr[i] != pieces[0][i]){
                    return false;
                }
            }
        }
        else
        {
            String normalArr = normalize(arr);
            for(int i=0;i<pieces.length;i++){
                String normalPieceArr = normalize(pieces[i]);
                if(normalArr.contains(normalPieceArr)){
                    normalArr = normalArr.replaceAll(normalPieceArr,"###");
                }else{
                    return false;
                }
            }
        }
        return true;
    }

    public static String normalize(int[] arr){
        String sb = new String("#");
        for(int ar:arr){
            sb = sb.concat(String.valueOf(ar)).concat("#");
        }
        return sb;
    }

    public int countDigit(int a){
        if(a<0)
            a=-a;
        int i=0;
        while(a>0){
            a=a/10;
            i++;
        }
        return i;
    }
}


//[37,69,3,74,46]
//[[37,69,3,74,46]]

//[2,82,79,95,28]
//[[2],[82],[28],[79,95]]

//[1,2,3]
//[[2],[1,3]]