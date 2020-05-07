// Educational Dynamic Programming Contest - AtCoder
// https://atcoder.jp/contests/dp/tasks/dp_d
// D - Knapsack 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int dp[101][100001],a[101][2];
    long long int n,w,i,j,item,wt;
    cin>>n>>w;
    for(i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    for(j=0;j<w+1;j++)
    {
        dp[0][j]=0;
    }
    for(j=0;j<n+1;j++)
    {
        dp[j][0]=0;
    }
    for(item=1;item<=n;item++)
    {
        for(wt=1;wt<=w;wt++)
        {
            if(a[item-1][0]<=wt)
            {
                dp[item][wt] = std::max(dp[item-1][wt],a[item-1][1]+dp[item-1][wt-a[item-1][0]]);
            }
            else
            {
                dp[item][wt] = dp[item-1][wt];
            }
        }
    }
    cout<<dp[n][w];
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int dp[101][100001],a[101][2];
    long long int n,w,i,j,item,wt;
    cin>>n>>w;
    for(i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    for(j=0;j<w+1;j++)
    {
        dp[0][j]=0;
    }
    for(j=0;j<n+1;j++)
    {
        dp[j][0]=0;
    }
    for(item=1;item<=n;item++)
    {
        for(wt=1;wt<=w;wt++)
        {
            if(a[item-1][0]<=wt)
            {
                dp[item][wt] = std::max(dp[item-1][wt],a[item-1][1]+dp[item-1][wt-a[item-1][0]]);
            }
            else
            {
                dp[item][wt] = dp[item-1][wt];
            }
        }
    }
    cout<<dp[n][w];
    return 0;
}
