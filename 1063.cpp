#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a>b?a:b);

	return 0;
}