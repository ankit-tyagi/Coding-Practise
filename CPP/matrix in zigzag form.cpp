#include<bits/stdc++.h>

using namespace std;

void printZigZag(int row, int col, int mat[][5])
{
    bool flag = true;
    for(int i=0;i<row;i++)
    {
        if(flag==true)
        {
            for(int j=0;j<col;j++)
                cout<<mat[i][j]<<" ";
        }
        else
        {
            for(int j=col-1;j>=0;j--)
                cout<<mat[i][j]<<" ";
        }
        flag = !flag;
        cout<<endl;
    }
}

int main()
{
    int r = 4, c = 5; 
  
        int mat[][5] = { {1, 2, 3, 4, 5}, 
                         {6, 7, 8, 9, 10}, 
                         {11, 12, 13, 14, 15},
                         {16,17,18,19,20} 
                       }; 
  
    printZigZag(r , c , mat); 
    /* code */
    return 0;
}
