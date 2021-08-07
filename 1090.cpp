#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	long long int a, r, n;
	cin >> a >> r >> n;
	for (int i = 1; i < n; i++)
	{
		a *= r;
	}

	cout << a;
	return 0;
}