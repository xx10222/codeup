#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a < b ? a : b) < c ? (a < b ? a : b) : c);

	return 0;
}