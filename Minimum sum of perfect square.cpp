

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

    int n;
    cin>>n;
    int dp[n+1];
    //dp[0] = 0;

    for(int i=0;i<=n;i++)
    {
        dp[i] = i ;//base case

        for(int j=1;j*j<=i;j++)
        {
            int temp = i - (j*j);
            dp[i] = min( dp[i], 1+dp[temp] );
        }
    }

    cout<<dp[n]<<endl;

return 0;
}
