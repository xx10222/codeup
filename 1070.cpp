#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int c;
	scanf("%d", &c);

	switch (c)
	{
	case 12:
	case 1:
	case 2:
		cout << "winter" << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << "spring" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "summer" << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "fall" << endl;
		break;
	}
	

	return 0;
}