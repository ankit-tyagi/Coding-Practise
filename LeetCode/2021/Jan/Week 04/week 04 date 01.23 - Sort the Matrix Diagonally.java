class Solution {
    
    //First Solution
    public int[][] diagonalSort(int[][] mat) {
        
        for(int i=0, j=0; i<mat.length ;i++){
            ArrayList<Integer> arr = new ArrayList<>();
            for(int k=0; (i+k)<mat.length && (j+k)<mat[i].length;k++){
                arr.add(mat[i+k][j+k]);
            }
            arr = (ArrayList<Integer>) sortTheArray(arr);
            for(int k=0; (i+k)<mat.length && (j+k)<mat[i].length;k++){
                mat[i+k][j+k] = arr.get(k);
            }
        }

        for(int i=0, j=1; j<mat[i].length ;j++){
            ArrayList<Integer> arr = new ArrayList<>();
            for(int k=0; (i+k)<mat.length && (j+k)<mat[i].length;k++){
                arr.add(mat[i+k][j+k]);
            }
            arr = (ArrayList<Integer>) sortTheArray(arr);
            for(int k=0; (i+k)<mat.length && (j+k)<mat[i].length;k++){
                mat[i+k][j+k] = arr.get(k);
            }
        }

        return mat;
    }

    public static List<Integer> sortTheArray(ArrayList<Integer> arr){
        Collections.sort(arr);
        return arr;
//        return arr.stream().sorted().collect(Collectors.toList());
    }


    
    //Second Solution
    public static int[][] diagonalSortSecondSolution(int[][] mat) {

        HashMap<Integer, PriorityQueue<Integer>> hm = new HashMap<>();

        for(int i=0;i<mat.length;i++){
            for (int j=0;j<mat[i].length;j++){
                hm.putIfAbsent((i-j), new PriorityQueue<>());
                hm.get(i-j).add(mat[i][j]);
            }
        }

        for(int i=0;i<mat.length;i++){
            for (int j=0;j<mat[i].length;j++){
                mat[i][j] = hm.get(i-j).poll();
            }
        }

        return mat;
    }
}