/* From: Lich_Amnesia
 * Time: 2014-07-22 10:21:03
 *
 *
 * */
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <queue>
#include <set>
#include <vector>
using namespace std;

const int INF = ~0u>>1;
typedef pair <int,int> P;
#define MID(x,y) ((x+y)>>1)
#define iabs(x) ((x)>0?(x):-(x))
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define pb push_back
#define mp make_pair
#define print() cout<<"--------"<<endl
char s[11111];
int main(){
	cin >> s;
	long long ans = 0;
	for (int i = 0; i < strlen(s) - 12; i ++){
		long long sum = 1;
		for (int j = 0; j < 13; j ++){
			if (i + j >= strlen(s)) break;
			sum *= (s[i + j] - '0');
		}
		if (sum > ans) ans = sum;
	}
	cout << ans << endl;
	return 0;
}

