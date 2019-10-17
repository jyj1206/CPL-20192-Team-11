/*
	[2019112909] [정영진] 저는 이 소스 코드를 다른 소드 코드를 복사하지 않고 직접 작성하였습니다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define MAX_SIZE 20
#define SWAP(x,y,t) ((t)=(x), (x)=(y),(y)=(t))

void sort(int list[], int n) {
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (list[j] < list[min]) {
				min = j;
			}
		}
		SWAP(list[i], list[min], temp);
	}
}
int main() {
	int n, i;
	int a[MAX_SIZE];
	printf("Enter the number of numbers to generate: ");
	scanf("%d", &n);
	if (n < 1 || n >= MAX_SIZE) {
		fprintf(stderr, "Improper value of n\n");
		exit(1);
	}		
	printf("Generated list: \n");
	for (i = 0 ; i < n; i++) {
		a[i] = rand() % 1000;

		printf("%d ", a[i]);
	}
	printf("\n");
	sort(a, n);
	printf("Sorted list: \n");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}