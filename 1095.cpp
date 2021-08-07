#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int num, arr[10000];
    int min;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int i = num - 1; i >= 0; i--) {
        if (min > arr[i])
            min = arr[i];
    }
    printf("%d", min);
	return 0;
}