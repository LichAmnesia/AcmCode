#include <bits/stdc++.h>

using namespace std;
bool b[1010];
int main(int argc, char const *argv[])
{
	int Max = 1000;
	cout << Max << endl;
	int ans = 0,ansi;
	for (int i = Max - 1; i >= 1; i --){
		cout << i << endl;
		if (ans > i){
			break;
		}
		memset(b, 0, sizeof b);
		int remain = 1, len = 0;
		while (remain != 0 && !b[remain]){
			b[remain] = 1;
			remain *= 10; remain %= i;
			len ++;
			cout << i << ' ' << remain << endl;
		}
		if (ans < len){
			ansi = i;
			ans = len;
		}
	}

	printf("%d->%d\n", ansi, ans);
	return 0;
}