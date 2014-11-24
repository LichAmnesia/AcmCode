#include <bits/stdc++.h>
using namespace std;

long long f[1111];
int main(int argc, char const *argv[])
{
	f[0] = 1;
	for (int i = 1; i <= 500; i ++){
		f[i] = 4ll * (2 * i + 1) * (2 * i + 1) - 12 * i + f[i - 1];
	}
	cout << f[500] << endl;
	return 0;
}