#include<stdio.h>

void sortArray(int arr[100], int n) {
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	int n;
	printf ("nhap vao n:");
	scanf ("%d", &n);
	int arr[100];
	for (int i=0; i<n; i++) {
		printf ("\nnhap vao arr[%d] :", i);
		scanf ("\n%d", &arr[i]);
	}
	sortArray(arr, n);
	printf ("\nsap xep la : ");
	for (int i=0; i<n; i++) {
		printf ("\t %d", arr[i]);
	}
	return 0;
}
