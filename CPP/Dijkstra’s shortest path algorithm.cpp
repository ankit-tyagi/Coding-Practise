#include<iostream>
#include<bits/stdc++.h>

//total vertices
#define v 9

using namespace std;

int mindistance(int distance[], bool spt[])
{
    int min=INT_MIN, minindex;
    for(int x=0;x<v;x++)
    {
        if(spt[x]==false && distance[x] <= min )
            min=distance[x], minindex=x;
    }
    return minindex;

}

int printSolution(int dist[], int n) 
{ 
   printf("Vertex   Distance from Source\n"); 
   for (int i = 0; i < v; i++) 
      printf("%d \t\t %d\n", i, dist[i]); 
} 

void dijkstra(int graph[v][v], int source)
{
    int sdistance[v];
    bool spt[v];

    for(int i=0;i<v;i++)
    {
        sdistance[i] = INT_MAX;
        spt[i] = false;
    }

    sdistance[0] = 0;
    
    for(int count=0;count<v-1;count++)
    {
        int u = mindistance(sdistance, spt);
        spt[u] = true;

        for(int x=0;x<v;x++)
        {
            if(!spt[x] && graph[u][x] && sdistance[u] != INT_MAX && (sdistance[u] + graph[u][v] ) < sdistance[x])
                sdistance[x] = sdistance[u] + graph[u][x];
        }
    }
    printSolution(sdistance, v);

}




int main()
{
    int graph[v][v] = {{0, 4, 0, 0, 0, 0, 0, 8, 0}, 
                      {4, 0, 8, 0, 0, 0, 0, 11, 0}, 
                      {0, 8, 0, 7, 0, 4, 0, 0, 2}, 
                      {0, 0, 7, 0, 9, 14, 0, 0, 0}, 
                      {0, 0, 0, 9, 0, 10, 0, 0, 0}, 
                      {0, 0, 4, 14, 10, 0, 2, 0, 0}, 
                      {0, 0, 0, 0, 0, 2, 0, 1, 6}, 
                      {8, 11, 0, 0, 0, 0, 1, 0, 7}, 
                      {0, 0, 2, 0, 0, 0, 6, 7, 0} 
                    }; 

    dijkstra(graph, 0);
}