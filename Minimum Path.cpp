

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

	int m,n;
	cin>>m>>n;

	int dp[m+1][n+1], a[m+1][n+1];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}

	dp[0][0] = a[0][0];
	for(int j=1;j<n;j++)
		dp[0][j] = dp[0][j-1] + a[0][j];

	for(int i=1;i<m;i++)
		dp[i][0] = dp[i-1][0] + a[i][0];

	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
			dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + a[i][j];
	}

	cout<<dp[m-1][n-1]<<endl;

	return 0;
}