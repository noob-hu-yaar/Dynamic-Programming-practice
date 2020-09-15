/* In their new movie, Avengers have a new Superhero.This new Superhero has a string all the time.His power at a particular time is equal to number of palindromic substring in the string present at that time.
Now,avengers want to make a program that calculate it's power at different instant of time.Help the avengers in doing so.
So,your task is to print the number of palindromic substring in the given string.
A string is called palindrome if its reverse is equal to the string itself eg. "aba"
The substrings with different start indexes or end indexes are counted as different substrings even if they consist of same characters.

Input Format
The first and the only line of input contains a string s.  */


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

int fun(string s)
{
    int n = s.length();
    int ans = 0;
    bool dp[1000][1000] = {};

    for(int i=0;i<n;i++)
    dp[i][i] = 1,ans++;

    for(int i=0;i<n-1;i++)
    {
        if(s[i] == s[i+1])
        dp[i][i+1] = 1,ans++;
    }

    for(int d=2;d<n;d++)
    {
        int i=0,j=d;

        while(j < n)
        {
            if(s[i] == s[j] && dp[i+1][j-1])
            dp[i][j] = 1,ans++;

            i++,j++;
        }
    }

    return ans;
}

int main()
{
    fast_io;

    string s;
    cin>>s;

    cout<<fun(s)<<endl;

    return 0;
}

