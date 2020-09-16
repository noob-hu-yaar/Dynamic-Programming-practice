

#include <bits/stdc++.h> 
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define sp(x) fixed<<setprecision(x)
#define p_q priority_queue
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool fun(int a[], int n, int sum)
{
    bool dp[n+1][sum+1];

    for(int j=0;j<=sum;j++)
        dp[0][j] = false;
    
    for(int i=0;i<=n;i++)
        dp[i][0] = true;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(a[i-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i]];

            else
                dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][sum];
}
