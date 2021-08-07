#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	char c;
	char aa = 'a';
	scanf("%c", &c);
	do {
		printf("%c ", aa);
		aa++;
	} while (aa <= c);
	
	return 0;
}