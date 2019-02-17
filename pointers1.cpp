#include <stdio.h>
#include <stdlib.h>
#include <time.h>




void random(int arr[], int size){
	srand(time(NULL));
	int x;
	int flag[5*size];
	
	for(int i = 0; i < size; i++){
		x = rand() % (5*size);
		while(flag[x] == 1){
			x = rand() % (5*size);
		}
		arr[i] = x;
		flag[x] = 1;
	}
	
	return;
}


void swap(int *p1, int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	return;
	
}


int main(){
	
	int const size = 20;
	int k = size - 1;
	int array[size];
	
	random(array, size);
	
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	
	printf("\n");
	int *p1;
	int *p2;
	
	for(int i = 0; i < size / 2; i++){
		int *p1 = &array[i];
		int *p2 = &array[k];
		swap(p2, p1);
	k -= 1;
	}
	
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
		
}
