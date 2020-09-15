

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

int r,c;
int fun( vector< vector<bool> > &m)
{
    int dp[r][c];
    int ans = 0;

    for(int i=0;i<c;i++)
        dp[0][i] = m[0][i];

    for(int j=0;j<r;j++)
        dp[j][0] = m[j][0];

    for(int i=1;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            if(m[i][j] == 1)
            {
                dp[i][j] = 1 + min({ dp[i-1][j], dp[i][j-1], dp[i-1][j-1] });
                ans = max(ans, dp[i][j]);
            }

            else
                dp[i][j] = 0;
        }
    }

    //cout<<ans<<endl;
    return ans;
}

int main()
{
    fast_io;

    bool x;

    cin>>r>>c;

    vector< vector<bool> > m;

    for(int i=0;i<r;i++)
    {
        vector<bool> temp(c);
        for(int j=0;j<c;j++)
        {
            cin>>x;
            temp.pb(x);
        }
         m.pb(temp);
    }

    fun(m);

return 0;
}
