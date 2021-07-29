#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	char arr[21];
	scanf("%s", arr);
	for (int i = 0; arr[i] != '\0'; i++)
	{
		printf("\'%c\'\n", arr[i]);
	}
	return 0;
}