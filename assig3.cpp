#include <stdio.h>
#include <stdlib.h>






int main(){
	int cars, size, x, y;
	printf("Size: ");
	scanf("%d", &size);
	printf("Cars: ");
	scanf("%d", &cars);
	int array[size][size];
	int man[cars * 2];
	for(int i = 0; i < cars; i++){
		printf("Locations: ");
		scanf("%d %d", &x, &y);
		array[x][y] = 1;
		man[i] = x;
		man[i + 1] = y;
	}
	int largest = 0;
	int bestx, besty;
	int total = 0;
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(array[i][j] == 1){continue;}
			total = 0;
			for(int c = 0; c < 2*cars; c = c + 2){
				total += abs(man[c] - i) + abs(man[c + 1] - j);
								
			}
			if(total > largest){
				largest = total;
				bestx = i;
				besty = j;
			}
		}
	}
	printf("%d %d", bestx, besty);
	return 0;
	
	
	
	
	
	
}
