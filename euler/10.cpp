#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>	
using namespace std;

bool isprime[2000010];
int pr[200000];
int pnum = 0;
void init(){
	isprime[2] = 0;
	for (int i = 2; i <= sqrt(2000010.0); i ++){
		if (!isprime[i]){
			for (int j = i * i; j <= 2000010; j += i){
				isprime[j] = 1;
			}
		}
	}
	for (int i = 2; i <= 2000000; i ++){
		if (!isprime[i]) pr[pnum ++] = i;
	}
}

int main(int argc, char const *argv[])
{
	init();
	cout << pnum << endl;
	long long sum = 0;
	for (int i = 0; i < pnum; i ++){
		sum += pr[i];
	}
	cout << sum << endl;
	return 0;
}