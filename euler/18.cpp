#include <bits/stdc++.h>
using namespace std;
int dp[22][22];
int main(int argc, char const *argv[])
{
	int n = 15;
	int a[22][22];
	for (int i = 1; i <= 15; i ++){
		for (int j = 1; j <= i; j ++){
			cin >> a[i][j];
		}
	}
	dp[1][1] = a[1][1];
	for (int i = 2; i <= 15; i ++){
		dp[i][1] = a[i][1];
		for (int j = 2; j <= i; j ++){
			dp[i][j] = a[i][j] + max(dp[i - 1][j],dp[i - 1][j - 1]);
		}
	}
	int ans = 0;
	for (int i = 1; i <= 15; i ++){
		ans = max(ans, dp[15][i]);
	}
	cout << ans << endl;
	return 0;
}