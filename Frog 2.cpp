// Problem B - Educational Dynamic Programming Contest - AtCoder
// Link: https://atcoder.jp/contests/dp/tasks/dp_b
// B - Frog 2

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,i,j;
	cin>>n>>k;
	int a[n];
	int dp[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	dp[0]=0;
	dp[1] = abs(a[1]-a[0]);
	for(i=2;i<n;i++)
	{
	    dp[i] = INT_MAX;
	    for(j=i-1;j>=max(i-k,0);j--)
	    {
	        dp[i] = min(dp[i],dp[j]+abs(a[i]-a[j]));
	    }
	}
	cout<<dp[n-1]<<endl;
	return 0;
}