#include<bits/stdc++.h>

using namespace std;

#define R 3
#define C 3

int min(int x, int y, int z) 
{ 
   if (x < y) 
      return (x < z)? x : z; 
   else
      return (y < z)? y : z; 
} 

int mincost(int mat[R][C], int x, int y)
{
    int totalcost[R][C];
    totalcost[0][0] = mat[0][0];

    for(int i=1;i<=x;i++)
    {
        totalcost[i][0] = totalcost[i-1][0] + mat[i][0];
    }

    for(int i=1;i<=y;i++)
    {
        totalcost[0][i] = totalcost[0][i-1] + mat[0][i];
    }

    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            totalcost[i][j] = min(totalcost[i-1][j-1], totalcost[i-1][j] , totalcost[i][j-1]) + mat[i][j];
        }
    }
    return totalcost[x][y];

}

int main()
{ 
   int cost[R][C] = { {1, 2, 3}, 
                      {4, 8, 2}, 
                      {1, 5, 3} }; 
   printf(" %d ", mincost(cost, 2, 2)); 

    return 0;
}