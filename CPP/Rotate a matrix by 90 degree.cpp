#include<iostream>
#include<bits/stdc++.h>

using namespace std;

# define R 4
# define C 4

void transpose(int arr[R][C])
{
    for (int i = 0; i < R; i++) 
        for (int j = i; j < C; j++) 
            swap(arr[i][j], arr[j][i]);
}

void reverseclock(int arr[R][C])
{
    for (int i = 0; i < C; i++) 
        for (int j = 0, k = C - 1; j < k; j++, k--) 
            swap(arr[j][i], arr[k][i]);
}

void reverseanticlock(int arr[R][C])
{
    for(int i=0;i<R;i++)
        for(int j=0, k=C-1 ;j<k;j++,k--)
            swap(arr[i][j], arr[i][k]);
}

void rotate90clock(int arr[R][C])
{
    transpose(arr);
    reverseclock(arr);
}

void rotate90anticlock(int arr[R][C])
{
    transpose(arr);
    reverseanticlock(arr);
} 

void printMatrix(int arr[R][C]) 
{ 
    for (int i = 0; i < R; i++) { 
        for (int j = 0; j < C; j++) 
            cout << arr[i][j] << " "; 
        cout << '\n'; 
    } 
}

int main()
{
    int arr[R][C] = { { 1, 2, 3, 4 }, 
                      { 5, 6, 7, 8 }, 
                      { 9, 10, 11, 12 }, 
                      { 13, 14, 15, 16 } }; 
    rotate90clock(arr);
    printMatrix(arr); 

    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            arr[i][j] = (i*4)+j+1;
    
    cout<<"Next Matrix \n";

    printMatrix(arr);

    rotate90anticlock(arr); 
    printMatrix(arr); 
    return 0; 
}