#include <stdio.h>
#include <stdlib.h>

void swap(int arr [], int first, int second){
	int temp = arr[first];
	arr[first] = arr[second];
	arr[second] = temp;
	return;
}
void asc_sort(int arr[], int size){
	for(int i = 0; i < size; i++){
		for(int j = i + 1; j < size; j++){
			if(arr[i] > arr[j]){
				swap(arr, i, j);
			}
		}
	}
}
void dsc_sort(int arr[], int size){
	for(int i = 0; i < size; i++){
		for(int j = i + 1; j < size; j++){
			if(arr[i] < arr[j]){
				swap(arr, i, j);
			}
		}
	}
}

int main(){
	int size = 15;
	int sorting[size] = {2, 4, 5, 1, 3, 12, 13, 15, 16, 13, 13, 13, 19, 26, 105};
	asc_sort(sorting, size);
	for(int i = 0; i < size; i++){
		printf("%d ", sorting[i]);
	}
	printf("\n");
	dsc_sort(sorting, size);
	for(int i = 0; i < size; i++){
		printf("%d ", sorting[i]);
	}
	return 0;
} 
