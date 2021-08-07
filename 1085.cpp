#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	long long int h, b, c, s;
	double result;
	scanf("%lld %lld %lld %lld", &h, &b, &s, &c);
	result = h * b * s * c;
	printf("%.1f MB", result / (8 * 1024 * 1024));
	return 0;
}