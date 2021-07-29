#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	char arr[2001];
	fgets(arr, 2000, stdin);
	printf("%s\n", arr);
	return 0;
}