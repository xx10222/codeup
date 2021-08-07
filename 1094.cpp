#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int num, arr[10000];
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = num - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

	return 0;
}