#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int h, w, n, l[10], d[10], x[10], y[10];
	int arr[101][101] = { 0, };
	cin >> h >> w;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> l[i] >> d[i] >> x[i] >> y[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (d[i] == 1)
		{
			for (int j = 0; j < l[i]; j++)
			{
				arr[x[i]-1 + j][y[i]-1] = 1;
			}
		}
		else
		{
			for (int j = 0; j < l[i]; j++)
			{
				arr[x[i]-1][y[i]-1 + j] = 1;
			}
		}
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}