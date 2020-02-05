#include <stdio.h>

int min(int * arr, size_t size) {
	int min = arr[0];
	for(int i = 1; i < size; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

int max(int * arr, size_t size) {
	int max = arr[0];
	for(int i = 1; i < size; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

double avg(int * arr, size_t size) {
	double total = 0;
	for(int i = 0; i < size; i++) {
		total += arr[i];
	}
	return total / size;
}

int main() {
	int arr[10];
	printf("Type in ten (10) integers, seperated by a space:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);

	printf("Min: %d\n", min(arr, sizeof(arr)/sizeof(arr[0])));
	printf("Max: %d\n", max(arr, sizeof(arr)/sizeof(arr[0])));
	printf("Avg: %lf\n", avg(arr, sizeof(arr)/sizeof(arr[0])));

	return 0;
}
