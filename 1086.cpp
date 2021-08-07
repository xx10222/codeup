#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	long long int w, h, b;
	double result;
	scanf("%lld %lld %lld", &w, &h, &b);
	result = w * h * b;
	printf("%.02lf MB", result / (8 * 1024 * 1024));
	return 0;
}