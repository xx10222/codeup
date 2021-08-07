#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int num1, num2, result;


    scanf("%d %d", &num1, &num2);
    result = num1 || num2;

    printf("%d", result);
	
	return 0;
}