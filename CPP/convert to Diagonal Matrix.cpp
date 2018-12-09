#include<bits/stdc++.h>

using namespace std;

const int MAX = 100;

void print(int mat[][MAX], int n, int m) 
{ 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            cout << mat[i][j] << " "; 
        } 
        cout << endl; 
    } 
} 

void makenondiagonalzero(int mat[][MAX], int row, int col)
{
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            if(i!=j && i+j+1!=row)
                mat[i][j]=0;
        }
    print(mat, row, col);
}

int main()
{
    int mat[][MAX] = { { 2, 1, 7 }, 
                       { 3, 7, 2 }, 
                       { 5, 4, 9 } }; 
  
    makenondiagonalzero(mat, 3, 3);
    return 0;
}