#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int k = 0;
		scanf("%d", &k);
		printf("%d\n", k);
	}
	
	return 0;
}