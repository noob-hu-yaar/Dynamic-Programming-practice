

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

int fun(int length)
{
    int dp[length+1];

    dp[0] = 0;

    for(int len=1;len<=length;len++)
    {
        int ans = 0;
        for(int j=1;j<=(len/2);j++)
        {
            ans = max({ans, j*(len-j), j*dp[len-j]});
        }

        dp[len] = ans;
    }

    return dp[length];
}

int main()
{
    fast_io;

    int length;
    cin>>length;

    cout<<fun(length)<<endl;

return 0;
}
