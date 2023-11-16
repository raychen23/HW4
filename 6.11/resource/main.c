#include <stdio.h>


void improvedBubbleSort(int arr[], int n) {

	int max = 0, k;
	int new[] = { 0,0,0,0,0,0,0 };
	for (int j = 0; j < 7; j++) {
		for (int i = 0; i < n; i++) {
			if (arr[i] > max) {
				max = arr[i];
				k = i;
			}

		}
		arr[k] = -1;
		new[j] = max;
		max = 0;
		for (int i = 0; i < n; i++) {
			printf("%d ", new[i]);
		}
		printf("\n");
	}
}

int main() {
	int arr[] = { 3, 45, 20, 70, 29, 14, 18 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Sorted array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	improvedBubbleSort(arr, n);



	return 0;
}