// Educational Dynamic Programming Contest - AtCoder
// https://atcoder.jp/contests/dp/tasks/dp_f
// F - LCS

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    int len_s , len_t,i,j;
    getline(cin,s);
    getline(cin,t);
    len_s = s.length();
    len_t = t.length();
    int dp[len_s+1][len_t+1];
    for(i=0;i<=len_s;i++)
    {
        for(j=0;j<=len_t;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else if(s[i-1]==t[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j] = std::max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string LCS = "";
    i=len_s;
    j=len_t;
    while(i>0 && j>0)
    {
        if(s[i-1]==t[j-1])
        {
            LCS = s[i-1]+LCS;
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1])
        {
            --i;
        }
        else
        {
            --j;
        }
    }
    cout<<LCS<<endl;
	return 0;
}
