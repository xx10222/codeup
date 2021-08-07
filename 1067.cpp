#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	if (n < 0)
	{
		cout << "minus" << endl;
	}
	else
	{
		cout << "plus" << endl;
	}

	if (n % 2 == 0)
	{
		cout << "even" << endl;

	}
	else {
		cout << "odd" << endl;

	}
	return 0;
}