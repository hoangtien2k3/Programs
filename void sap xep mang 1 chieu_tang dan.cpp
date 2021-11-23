#include<stdio.h>
#include<string.h>

void sortArray(int n, int arr[100]) {
	for (int i=0; i<n-1; i++) {
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
		scanf ("%d", &arr[i]);
	}
	sortArray(n, arr);
	printf ("\nsap xep la : ");
	for (int i=0; i<n; i++) {
		printf ("\t %d", arr[i]);
	}
	return 0;
}
