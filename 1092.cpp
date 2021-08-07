#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int day = 1;
	while (day % a != 0 || day % b != 0 || day % c != 0) day++; //이게 무슨 의미일까?
	printf("%d", day);
	return 0;
}