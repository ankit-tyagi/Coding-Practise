#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int maze[R][C] =  {{0,  0, 0, 0}, 
                       {0, -1, 0, 0}, 
                       {-1, 0, 0, 0}, 
                       {0,  0, 0, 0}}; 
    cout << countPaths(maze);
    return 0;
}