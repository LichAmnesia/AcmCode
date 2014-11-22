/* From: Lich_Amnesia
 * Time: 2014-01-10 12:22:04
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
typedef long long ll;

bool check(ll x){
	for (ll i = 2; i * i <= x; i ++){
		if (x % i == 0) return false;	
	}
	return true;
}

int main(){
	ll n = 600851475143;
	ll ans = 0;
	for (ll i = 2; i * i <= n; i ++){
		if (n % i == 0) {
			if (check(i)) ans = max(i,ans);
			if (check(n/i)) ans = max(ans,n/i);
		}
	}
	cout << ans << endl;
	return 0;
}

