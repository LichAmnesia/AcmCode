#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

int a[41][44];
int main(int argc, char const *argv[])
{
	for (int i = 3; i <= 23; i ++){
		for (int j = 3; j <= 23; j ++){
			scanf("%d", &a[i][j]);
		}
	}
	int ans = 0;
	for (int i = 3; i <= 23; i ++){
		for (int j = 3; j <= 23; j ++){
			ans = max(ans, a[i][j] * a[i + 1][j + 1] * a[i + 2][j + 2] * a[i + 3][j + 3]);	
			ans = max(ans, a[i][j] * a[i + 1][j - 1] * a[i + 2][j - 2] * a[i + 3][j - 3]);
			ans = max(ans, a[i][j] * a[i + 1][j] * a[i + 2][j] * a[i + 3][j]);
			ans = max(ans, a[i][j] * a[i][j + 1] * a[i][j + 2] * a[i][j + 3]);
		}
	}
	cout << ans << endl;
	return 0;
}