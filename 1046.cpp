#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", a + b+c);
	printf("%.01f\n", float(a+b+c)/3);
	
	return 0;
}