

#include <bits/stdc++.h> 
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define sp(x) fixed<<setprecision(x)
#define p_q priority_queue
#define fast_io ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int lcs(string x, string y, int m, int n)
{
    int dp[m+1][n+1];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            dp[i][j] = 0;

            else if(x[i-1] == y[j-1])
            dp[i][j] = 1 + dp[i-1][j-1];

            else
            dp[i][j] = max( dp[i][j-1], dp[i-1][j] );
        }
    }

    return dp[m][n];
}

int main()
{

    fast_io;

    string x,y;
    cin>>x>>y;

    int m = x.length(), n = y.length();

    cout<<lcs(x,y,m,n)<<endl;

    return 0;
}