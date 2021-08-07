#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int arr[5];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%s\n", "even");
		}
		else
		{
			printf("% s\n", "odd");
		}
	}
	

	return 0;
}