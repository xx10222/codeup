#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	if (n >= 90) {
		cout << "A" << endl;
	}
	else if (n >= 70) {
		cout << "B" << endl;
	}
	else if (n >= 40) {
		cout << "C" << endl;
	}
	else {
		cout << "D" << endl;
	}
	return 0;
}