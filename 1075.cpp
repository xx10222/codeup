#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	while (n > 0)
	{
		printf("%d\n", --n);
	}
	
	return 0;
}