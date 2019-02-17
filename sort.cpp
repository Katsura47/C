#include <stdio.h>

void print(int array[], int size){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	return;
}

void otele(int array[], int starting, int size){
	for(int i = size - 1; i >= starting ; i--){
		array[i + 1] = array[i]; 
		
	}
	
}

void find_place(int array[], int num, int size){
	for(int i = 0; i < size; i++){
		if(num < array[i]){
			otele(array, i, size);
			array[i] = num;
			break;
		}
	}
	
	
}



int main(){
	int inp;
	int i = 0;
	int const size = 5;
	int array[size];
	do{
		printf("Enter an integer: ");
		scanf("%d", &inp);
		i++;
		find_place(array, inp, i);
		print(array, i);
		printf("\n");
		
	}
	while(i < size);

}





