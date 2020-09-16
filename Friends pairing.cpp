

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

int main()
{
    fast_io;

    int f;
    cin>>f;
    int dp[f+1];

    dp[0] = 0;
    dp[1] =  1;
    dp[2] = 2;

    for(int i=3;i<=f;i++)
    {
        dp[i] = dp[i-1] + (i-1)*dp[i-2];
    }

    cout<<dp[f]<<endl;

return 0;
}
