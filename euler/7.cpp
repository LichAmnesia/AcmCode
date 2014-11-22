#include <iostream>
#include <cstdio>



using namespace std;
bool isprime[200000];
int main(int argc, char const *argv[])
{	
	int cnt = 0;
	isprime[2] = 0;
	for (int i = 2; i < 10001; i ++){
		if (!isprime[i]){
			//cout << i << endl;
			for (int j = i * i; j < 200000; j += i){
				isprime[j] = 1;
			}
		}
	}
	for (int i = 2; i < 200000; i ++){
		if (!isprime[i]) cnt ++;
		if (cnt == 10001) {cout << i << endl; return 0;}
	}
	return 0;	
}