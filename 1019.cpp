#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int y, m, d;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%04d.%02d.%02d\n", y, m, d);
	return 0;
}