#include <bits/stdc++.h>

using namespace std;
string s;
string ss[100000];
int main(int argc, char const *argv[])
{
	int n = 5000;
	cin >> s;
	int id = 1;
	long long ans = 0;
	int snum = 0;
	for (int i = 0; i < s.size(); i ++){
		if (s[i] == '\"'){
			i ++;
			int st = i;
			int len = 0;
			while (s[i] != '\"'){
				len ++;
				i ++;
			}
			int ed = i - 1;
			ss[snum ++] = s.substr(st,len);
			//cout << st << ' ' << ed << ' ' << ss[snum - 1] << endl;
			
		}
	}

	sort(ss, ss + snum);
	for (int i = 0; i < snum; i ++){
		//if (i == 937) cout << ss[i] << endl;
		int sum = 0;
		for (int j = 0; j < ss[i].size(); j ++){
			sum += ss[i][j] - 'A' + 1;
		}
		// if (i == 937){
		// 	cout << i << ' ' << sum << ' ' << (i + 1) * sum << endl;
		// }
		ans += (i + 1) * sum;
	}
	cout << ans << endl;
	return 0;
}