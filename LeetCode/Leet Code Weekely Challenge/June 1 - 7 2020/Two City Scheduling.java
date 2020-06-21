class Solution {
    public int twoCitySchedCost(int[][] costs) {
        
        Arrays.sort(costs, new Comparator<int[]>() { 
            
          @Override              
          // Compare values according to columns 
          public int compare(int[] entry1, int[] entry2) { 
  
            // To sort in descending order revert  
            // the '>' Operator 
            if (Math.abs(entry1[0]-entry1[1]) > Math.abs(entry2[0]-entry2[1])) 
                return -1; 
            else
                return 1; 
          } 
        });  // End of function call sort(). 
        // for(int i=0;i<costs.length ;i++)
        // {
        //     System.out.println(costs[i][0]+" , "+costs[i][1]);    
        // }
        
        int n = costs.length / 2;
        int city1 = 0, city2 = 0, ans = 0, i = 0;
        
        while(i<costs.length)
        {
            if(city2==n || (costs[i][0] < costs[i][1]  &&  city1 < n))
            {
                ans =ans + costs[i][0];
                //System.out.println("in city 1 is :" + costs[i][0]); 
                city1++;
            }
            else{
                ans =ans + costs[i][1];
                //System.out.println("in city 2 is :" + costs[i][1]); 
                city2++;
            }
            i++;
        }
        return ans;
    }
}



// Input:
// [[259,770],[448,54],[926,667],[184,139],[840,118],[577,469]]
// Output:
// 1706
// Expected:
// 1859






// [[518,518],[71,971],[121,862],[967,607],[138,754],[513,337],[499,873],[337,387],[647,917],[76,417]]
// Output:
// 3401
// Expected:
// 3671



