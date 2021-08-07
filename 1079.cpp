#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	char c;
	while (1) {
		cin >> c;
		cout << c << endl;
		if (c == 'q') break;
	}
	return 0;
}