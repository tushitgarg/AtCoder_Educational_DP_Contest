// Problem B - Educational Dynamic Programming Contest - AtCoder
// https://atcoder.jp/contests/dp/tasks/dp_c
// C - Vacation

#include <bits/stdc++.h>
using namespace std;
int n;
int dp[100000][3],a[100000][3];
int solve(int pos , int last)
{
    if(pos==n+1)
    return 0;
    if(dp[pos][last]!=-1)
    return dp[pos][last];
    
    int best = INT_MIN;
    for(int i=0;i<=2;i++)
    {
        if(i!=last)
        {
            best = max(best,a[pos][i]+solve(pos+1,i));
        }
    }
    dp[pos][last] = best;
    return dp[pos][last];
}

int main() {
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        dp[i][0]=-1;
        dp[i][1]=-1;
        dp[i][2]=-1;
    }
    cout<<max(solve(1,0),max(solve(1,1),solve(1,2)))<<endl;
	return 0;
}
