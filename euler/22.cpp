#include <bits/stdc++.h>

using namespace std;
char s[1111111];
int main(int argc, char const *argv[])
{
	int n = 5000;
	scanf("%s", s);
	int id = 1;
	long long ans = 0;
	for (int i = 0; i < strlen(s); i ++){
		if (s[i] == '\"'){
			int sum = 0;
			i ++;
			while (s[i] != '\"'){
				//cout << s[i];
				sum += s[i] - 'A';
				i ++;
			}
			//cout << endl;
			if (id == 939){
				cout << sum << endl;
			}
			ans += id * sum;
			id ++;
		}
	}
	cout << ans << endl;
	return 0;
}