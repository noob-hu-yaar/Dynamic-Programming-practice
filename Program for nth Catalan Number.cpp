

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

int fun(int n)
{
    int dp[n+1];

    dp[0] = dp[1] = 1;

    for(int i=2;i<=n;i++)
    {
        dp[i] = 0;

        for(int j=0;j<i;j++)
        {
            dp[i] += dp[j]*dp[i-1-j];
        }
    }

    return dp[n];
}

int main()
{
    fast_io;

    int n;
    cin>>n;

    cout<<fun(n-1)<<endl;

return 0;
}
