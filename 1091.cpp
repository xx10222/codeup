#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	long long int a, m, d, n;
	long long int res;
	cin >> a >> m >> d >> n;
	for (int i = 1; i < n; i++)
	{
		a *= m;
		a += d;
	}
	cout << a;
	return 0;
}