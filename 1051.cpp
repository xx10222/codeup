#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%d\n", a<=b);
	
	return 0;
}