#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	char c;
	scanf("%c", &c);

	switch (c)
	{
	case 'A':
		cout << "best!!!" << endl;
		break;
	case 'B':
		cout << "good!!" << endl;
		break;
	case 'C':
		cout << "run!" << endl;
		break;
	case 'D':
		cout << "slowly~" << endl;
		break;
	default:
		cout << "what?" << endl;
		break;
	}
	

	return 0;
}