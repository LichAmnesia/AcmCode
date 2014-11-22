#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int suma = 0;
	for (int i = 1; i <= 100; i ++){
		suma += i * i;
	}
	int sumb = 0;
	for (int i = 1; i <= 100; i ++){
		sumb += i;
	}
	sumb *= sumb;
	cout << sumb - suma << endl;
	return 0;
}