#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < s.size(); i ++){
		sum += s[i] - '0';
	}
	cout << sum << endl;
	return 0;
}