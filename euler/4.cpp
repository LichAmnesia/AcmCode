/* From: Lich_Amnesia
 * Time: 2014-01-10 12:39:01
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
struct Info{
	int p;
	int a,b;
	Info(){}
	Info(int _a,int _b, int _c){
		p = _a;
		a = _b;
		b = _c;
	}
};

bool check(int x){
	int a,b;
	char s[10];
	sprintf(s, "%d", x);
	for (int i = 0; i < strlen(s); i ++){
		if (s[i] != s[strlen(s) - 1 - i]) return false; 
	}
	return true;
}

int main(){
	Info ans = Info(0,0,0);
	for (int i = 100; i <= 999; i++)
		for (int j = 100; j <= 999; j ++){
			if (check(i*j)) {
				if (i * j > ans.p){
					ans = Info(i*j,i,j);
				}
			}
		}
	cout << ans.p << ' ' << ans.a << ' ' << ans.b << endl;
	return 0;
}

