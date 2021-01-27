class Solution {
    public boolean canFormArray(int[] arr, int[][] pieces) {
        
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
    
        public String normalize(int[] arr){
        String sb = new String("#");
        for(int ar:arr){
            sb = sb.concat(String.valueOf(ar)).concat("#");
        }
        return sb;
    }
}