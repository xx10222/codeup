#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n, result;
	result = 0;
	scanf("%d", &n);
	
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0) result += i;
	}
	printf("%d\n", result);
	return 0;
}