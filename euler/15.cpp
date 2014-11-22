#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	ll ret = 1;
	int n = 40;
	for (int i = 1; i <= 20; i ++){
		ret *= (n - i + 1);
		ret /= i;
	}
	
	cout << ret << endl;
	return 0;
}