#include "sort.h"



using namespace std;


void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void arrPrint(int* pArr, int length) {
	for (int k = 0; k < length; k++) {
		cout << pArr[k] << ' ';
	}
	cout << endl;
}

void bubbleSort(int arr[], int arrLength) {
	bool sorted = false;

	for (int k = 0; k < arrLength; k++) {
		cout << arr[k] << ' ';
	}
	cout << endl;

	while (!sorted) {
		sorted = true;
		int i = 0;
		for (int j = i; j < arrLength - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				sorted = false;
			}
		}
		i++;

	}

	arrPrint(arr, arrLength);
}

void selectionSort(int* arr, int arrLength) {

	arrPrint(arr, arrLength);
	int minValueIndex = 0;

	for (int k = 0; k < arrLength; k++) {

		int minValue = arr[k];
		for (int i = k; i <= arrLength; i++) {

			if (arr[i] < minValue) {
				minValue = arr[i];
				minValueIndex = i;
			}

		}
		arr[minValueIndex] = arr[k];
		arr[k] = minValue;
	}

	arrPrint(arr, arrLength);
}
