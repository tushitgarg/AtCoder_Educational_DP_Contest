// Educational Dynamic Programming Contest - AtCoder
// https://atcoder.jp/contests/dp/tasks/dp_a
// A - Frog 1

#include <iostream>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	int a[n];
	int dp[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	dp[0]=0;
	dp[1] = abs(a[1]-a[0]);
	for(i=2;i<n;i++)
	{
		dp[i] = min(dp[i-2]+abs(a[i-2]-a[i]),dp[i-1]+abs(a[i-1]-a[i]));
	}
	cout<<dp[n-1]<<endl;
	return 0;
}