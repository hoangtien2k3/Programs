#include<stdio.h>
#include<string.h>

int countOddInArray(int arr[], int n) {
	int count = 0;
	for (int i=0; i<n; i++) {
		if (arr[i] % 2 != 0) {
			count++;
		}
	}
	return count;
}

int main() {
	int n;
	printf ("nhap vao n = ");
	scanf ("%d", &n);
	int arr[n];
	
	do {
		if (n < 0) {
			printf ("\nhap lai gia tri n = ");
			scanf ("%d", &n);
		}	
	} while (n < 0);
	for (int i=0; i<n; i++) {
		printf ("\nnhap vao mang arr[%d] = ", i);
		scanf ("%d", &arr[i]);
	}
	printf ("%d", countOddInArray(arr, n));
	return 0;
	
}
