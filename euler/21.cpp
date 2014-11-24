#include <bits/stdc++.h>
using namespace std;
int upLimit = 10000;

int solve(int n){
	int stnum = n;
	int sq = sqrt(n) + 1;
	int ret = 1;
	for (int i = 2; n > 1 && i <= sq; i ++){
		int tmp = 1;
		while (n % i == 0){
			n /= i;
			tmp *= i;
			tmp += 1;
		}
		ret *= tmp;
	}
	if (n > 1){
		ret *= n + 1;
	}
	return ret - stnum;
}

int main(int argc, char const *argv[])
{
	int ans = 0;
	cout << solve(284) << endl;
	for (int i = 2; i <= upLimit; i ++){
		int sumi = solve(i);
		//cout << i << ' ' << sumi << endl;
 		if (sumi > i && sumi <= upLimit){
			int sumj = solve(sumi);
			if (sumj == i){
				ans += sumi;ans += i;
			}
		}
	}
	cout << ans << endl;
	return 0;
}