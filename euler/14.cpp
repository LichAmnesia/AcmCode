#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;
int ans[1100000];
int main(int argc, char const *argv[])
{
	ans[1] = 0;
	int Max = 0,Maxi;
	for (int i = 2; i <= 1000000; i ++){
		long long j = i;
		int k = 0;
		while (j != 1 && j >= i){
			k ++;
			if (j % 2 == 0){
				j = j / 2;
			}else {
				j = 3 * j + 1;
			}
			//printf("%d %d\n", i, j);
		}
		ans[i] = k + ans[j];
		if (ans[i] > Max){
			Maxi = i;
			Max = ans[i];
		}
	}
	cout << Maxi << endl;
	return 0;
}