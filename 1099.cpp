#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int arr[11][11];
	int ant, x, y;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cin >> arr[i][j];
		}
	}
	x = 2;
	y = 2;
	while (1)
	{
		if (arr[x][y] == 0)
		{
			arr[x][y] = 9;
			y++;
		}
		else if (arr[x][y] == 1)
		{
			y--;
			x++;
		}
		if (arr[x][y] == 2)
		{
			arr[x][y] = 9;
			break;
		}
		else if (arr[x][y+1]==1&&arr[x+1][y]==1)
		{
			if (arr[x][y] == 0)
			{
				arr[x][y] = 9;
			}
			break;
		}
	}
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}