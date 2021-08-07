#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n, result;
	result = 0;
	cin >> n;
	for (int i = 0; result < n; i++)
	{
		result += i;
	}
	cout << result;
	return 0;
}