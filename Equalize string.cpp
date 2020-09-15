

#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    fast_io;

    string s1,s2;
    cin>>s1>>s2; //jbhj

    int len_s1 = s1.size();
    int len_s2 = s2.size();
    int dp[len_s1+1][len_s2+1];

    for(int i=0;i<=len_s1;i++)
    {
        for(int j=0;j<=len_s2;j++)
        {
            if(i == 0)
            dp[i][j] = j; 

            else if(j == 0)
            dp[i][j] = i;

            else if(s1[i-1] == s2[j-1])
            dp[i][j] = dp[i-1][j-1]; 

            else
            {
                dp[i][j] = 1 + min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1]));
                
            }
        }
    }

    cout<<dp[len_s1][len_s2]<<endl;
    return 0;
}
