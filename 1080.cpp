#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n, sum, i;
	sum = 0;
	cin >> n;
	for (i = 0; sum < n; i++) 
	{
		sum += i;
	}
	cout << i-1 << endl;
	return 0;
}