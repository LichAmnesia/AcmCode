#include <bits/stdc++.h>
using namespace std;

long long f[1111];
int main(int argc, char const *argv[])
{
	int ans = 0;
	for (int i = 2; i <= 1000000;i ++){
		int tmp = i;
		int ret = 0;
		while (tmp){
			int l = tmp % 10;
			tmp /= 10;
			int cnt = 1;
			for (int j = 0; j < 5; j ++){
				cnt *= l;
			}
			ret += cnt;
		}
		if (ret == i){
			printf("%d\n", i);
			ans += i;
		}
	}
	cout << ans << endl;
	return 0;
}