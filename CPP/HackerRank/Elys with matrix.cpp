//STILL INCOMPLETE

#include<bits/stdc++.h>
using namespace std;

int size = 100000;
vector<pair<long long int,pair<int,int>>> arr[10000];

bool sortinrev(const pair<long long int,pair<int,int>> &a, const pair<long long int,pair<int,int>> &b) 
{ 
       return (a.first > b.first); 
} 

void transpose(int m, int n)
{
    for (int i = 0; i < m; i++) 
        for (int j = i; i < j; j++)  
            swap(arr[i][j], arr[j][i]); 
}

void sortByRow(int m, int n)
{
    cout<<"calling sort"<<endl;
    for (int i = 0; i < n; i++) 
        sort(arr[i].begin(), arr[i].begin() + n, sortinrev); 
    cout<<"lets print m and n are"<<m <<n<<endl;
    cout<<"values are"<<arr[0][0].first<<" "<<arr[0][1].first<<" "<<arr[1][0].first<<" "<<arr[1][1].first<<endl;
    for (int i = 0; i < m; i++) 
    {    for (int j = 0; i < n; j++)  
        {    cout<<arr[i][j].first; }
        cout<<endl;
    }
    cout<<endl<<endl<<endl;

    transpose(m, n);
    for (int i = 0; i < m; i++) 
        for (int j = 0; i < n; j++)  
            cout<<arr[i][j].first; 
}   

void sortrowcolumn(int m, int n)
{
    cout<<"calling second method";
    sortByRow(m, n);
}

int main()
{
    int m,n;
    cin>>m>>n;
    long long int value = 0;
   // vector<pair<long long int,pair<int,int>>> arr[n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>value;
            arr[i].push_back(make_pair(value,make_pair(i,j)));
            //arr[i][j].second.first = i;
            //arr[i][j].second.second = j;
            //make_pair(value,make_pair(i,j));
            cout<<"<"<<arr[i][j].first<<",<"<<arr[i][j].second.first<<","<<arr[i][j].second.second<<">>"<<endl;
        }
    }
    cout<<"going for the function"<<endl;
    sortrowcolumn(m, n);

    return 0;
}