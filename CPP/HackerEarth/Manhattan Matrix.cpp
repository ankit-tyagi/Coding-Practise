#include<bits/stdc++.h>
using namespace std;


bool is_safe(int a[502][502], int row, int col, int max_row, int max_col, int visited[502][502], int steps) 
{ 
    if(visited[row][col] > -1 )
        return (row >= 0) && (row < max_row) && (col >= 0) && (col < max_col) && a[row][col] && (visited[row][col] > steps+1);
    else
    {
        return (row >= 0) && (row < max_row) && (col >= 0) && (col < max_col) && a[row][col];
    }
     
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int a[502][502];
        int visitinsteps[502][502];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                visitinsteps[i][j] = -1;
            }
        }

        int x,y,step=0;
        cin>>x>>y;
        x--;
        y--;
        visitinsteps[x][y] = step;
        queue<pair<int, pair<int,int>>> q;

        q.push(make_pair(step, make_pair(x,y)));

        while(!q.empty())
        {
            int u,v;
            int st = q.front().first;
            u = q.front().second.first;
            v = q.front().second.second;


            int x1 = u - a[u][v];
            int y1 = v - a[u][v];
            int x2 = u + a[u][v];
            int y2 = v + a[u][v];

            if(a[u][v] != 0)
            {
                for(int i = x1; i <= x2; i++)
                {
                    for( int j = y1; j <= y2; j++ )
                    {
                        if( (abs(x1-u) + abs(x2-v)) == a[i][j] )
                        {
                            if(is_safe(a,i,j,x,y,visitinsteps,st))
                            {
                                visitinsteps[i][j] = st + 1;
                                q.push(make_pair(st+1, make_pair(i,j)));
                            }
                        }
                    }
                }
                
            }
            q.pop();

               

        }

        int query = 0;
        int o,p;
        while(query--)
        {
            cin>>o>>p;
            o--;p--;
            cout<<a[o][p]<<endl;

        }
        
        
    }
}




/*
vector<int> solve (vector<vector<int> > A, vector<int> x, int sy, int sx, vector<int> y) {
   // Write your code here
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        vector<vector<int> > A(N, vector<int>(M));
        for (int i_A=0; i_A<N; i_A++)
        {
        	for(int j_A=0; j_A<M; j_A++)
        	{
        		cin >> A[i_A][j_A];
        	}
        }
        int sx;
        cin >> sx;
        int sy;
        cin >> sy;
        int Q;
        cin >> Q;
        vector<int> x(Q);
        vector<int> y(Q);

        for(int i=0; i<Q; i++)
        {
        	cin >> x[i]>>y[i];
         }
        vector<int> out_;
        out_ = solve(A, x, sy, sx, y);
        
        for(int i_out_=0; i_out_<out_.size(); i_out_++)
        {
        	cout << out_[i_out_]<<endl;
        }
    }
}*/



/*

Manhattan Matrix
You are given with a matrix of dimensions  X . Each element of the matrix , is an integer between . You are provided with a starting point . 
Your task is to answer  queries. Each query comprises of a point . Your task is to find the minimum number of moves required to reach  starting from . Output  if it is not possible to reach  from .
A move from  to  is allowed if the manhattan distance between  and  is equal to .

INPUT FORMAT:

First line contains number of test cases .
First line of each test case contains two integers  and .
Next  lines contain  space separated integers each corresponding to .
Next line contains the starting point  separated by a space.
Next line contains a single integer  denoting number of queries.
Next  lines contains two space separated integers .

OUTPUT FORMAT:

For each query, output the minimum number of moves required to reach  starting from  in a new line. Output  if it is not possible to reach  from .

CONSTRAINTS

Sample Input
1
4 4
1 2 1 0
0 1 2 3
3 3 1 5
0 0 1 0
2 3
5
1 1
4 1
4 4
2 4
3 2
Sample Output
2
-1
2
2
1
Explanation
Query 1: (2,3)->(3,2)->(1,1). Therefore 2 moves.
Query 2: No path to reach (4,1). Therefore output is -1.
Query 3: (2,3)->(4,3)->(4,4). Therefore 2 moves.
Query 4: (2,3)->(3,2)->(2,4). Therefore 2 moves.
Query 5: (2,3)->(3,2). Therefore 1 move.

Note: Your code should be able to convert the sample input into the sample output. However, this is not enough to pass the challenge, because the code will be run on multiple test cases. Therefore, your code must solve this problem statement.
Time Limit: 5.0 sec(s) for each input file
Memory Limit: 256 MB
Source Limit: 1024 KB

*/