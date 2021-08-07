#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	while (1) {
		scanf("%d", &n);
		if (n == 0) break;
		printf("%d\n", n);
	}
	
	return 0;
}