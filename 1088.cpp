#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		if (i % 3 != 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}