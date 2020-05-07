// Educational Dynamic Programming Contest - AtCoder
// https://atcoder.jp/contests/dp/tasks/dp_e
// E - Knapsack 2

#include <bits/stdc++.h>
using namespace std;
long long int dp[100001][101],a[101][2];
long long int n,w,i,j,item,wt,v_max,w_max;

long long int solve(long long int value,long long int i)
{
    if (value <= 0)
        return 0; 
    if (i == n+1) 
        return w_max; 
    if (dp[value][i]) 
        return dp[value][i];
    dp[value][i] = std::min(solve(value,i+1), a[i-1][0]+solve(value-a[i-1][1],i+1)); 
    return dp[value][i]; 
}
int main() {
    cin>>n>>w;
    v_max = 0;
    for(i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        v_max = v_max + a[i][1];
        w_max = w_max + a[i][0];
    }
    for(i=v_max;i>=0;i--)
    {
        if (solve(i,0) <= w) 
        { 
            cout<<i<<endl;
            break;
        } 
    }
}