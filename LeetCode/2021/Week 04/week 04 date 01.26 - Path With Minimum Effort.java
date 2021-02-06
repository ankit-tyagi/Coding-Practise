/// Try some different Implementation, it is giving TLE in many cases

class Solution {
    int result = Integer.MAX_VALUE;
    
    public int minimumEffortPath(int[][] heights) {
        int r = heights.length;
        int c = heights[0].length;
        if(r==1 && c==1)
            return 0;
        boolean[][] visited = new boolean[r][c];
        for(int i=0;i<r;i++){
            for(int j=0; j<c ;j++){
                visited[i][j] = false;
            }
        }
        visited[0][0] = true;
        calculateMinEffort(r, c, 1, 0, 0, 0, heights, visited, 0);
        calculateMinEffort(r, c, 0, 1, 0, 0, heights, visited, 0);
        return result;        
    }
    
        int calculateMinEffort(int row, int col, int i, int j, int pi, int pj, int[][] heights, boolean[][] visited,int currentResult){
        if(i<0 || i>=row || j<0 || j>=col || visited[i][j]){
            return Integer.MIN_VALUE;
        }
        visited[i][j] = true;
        currentResult = Math.max(currentResult, Math.abs(heights[i][j]-heights[pi][pj]));
        if(currentResult>=result)
            return Integer.MAX_VALUE;
        if(i==row-1 && j== col-1){
            result = Math.min(result, currentResult);
            return Integer.MIN_VALUE;
        }
        int diff = Math.max(
                    Math.max(calculateMinEffort(row, col, i +1, j, i, j, heights, visited, currentResult),
                            calculateMinEffort(row, col, i-1, j, i, j, heights, visited, currentResult)),
                    Math.max(calculateMinEffort(row, col, i, j+1, i, j, heights, visited, currentResult),
                            calculateMinEffort(row, col, i, j-1, i, j, heights, visited, currentResult))
         );
         visited[i][j] = false;
         return diff;
    }
}


//{{1,2,2},{3,8,2},{5,3,5}}
//{{1,2,3},{3,8,4},{5,3,5}}
//{{3}}
//{{1,2,1,1,1},{1,2,1,2,1},{1,2,1,2,1},{1,2,1,2,1},{1,1,1,2,1}}
//{{4,3,4,10,5,5,9,2},{10,8,2,10,9,7,5,6},{5,8,10,10,10,7,4,2},{5,1,3,1,1,3,1,9},{6,4,10,6,10,9,4,6}}
//{{8,3,2,5,2,10,7,1,8,9},{1,4,9,1,10,2,4,10,3,5},{4,10,10,3,6,1,3,9,8,8},{4,4,6,10,10,10,2,10,8,8},{9,10,2,4,1,2,2,6,5,7},{2,9,2,6,1,4,7,6,10,9},{8,8,2,10,8,2,3,9,5,3},{2,10,9,3,5,1,7,4,5,6},{2,3,9,2,5,10,2,7,1,8},{9,10,4,10,7,4,9,3,1,6}}