#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int a, d, n;
	cin >> a >> d >> n;
	cout << a + (n - 1) * d;
	return 0;
}