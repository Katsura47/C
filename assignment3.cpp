#include <stdio.h>
#include <stdlib.h>

// Func for absolute value.
int absv(int v1, int v2){
	if(v1 < v2){
		return v2 - v1;
	}
	return v1 - v2;
}



int main(){
	int size, cars, x, y;
	int const SIZE = 50;
	int park[SIZE][SIZE];
	int car_xs[SIZE];
	int car_ys[SIZE];
	// Taking inputs.
	printf("Size: ");
	scanf("%d", &size);
	printf("Cars: ");
	scanf("%d", &cars);
	//
	// Error Checking.
	if(cars > size*size){
		return EXIT_FAILURE;
	}
	if(cars == size*size){
		printf("%d %d", 0, 0);
		return EXIT_FAILURE;
	}
	//
	// Taking Locations for each car as x-y and add them to two seperate arrays(car_xs, car_ys).
	for(int i = 0; i < cars; i++){
		printf("Locations: ");
		scanf("%d %d", &x, &y);
		// 	For inputs that given before.
		if(park[x][y] == 1){
			i = i - 1;
		}
		else{
		car_xs[i] = x;
		car_ys[i] = y;
		// For saying that there is a car in this location.
		park[x][y] = 1;
		}
	}
	
	
	int distance, bestx, besty;
	int largest = 0;
	
	for(int i = 1; i < size + 1; i++){
		for(int j = 1; j < size + 1; j++){
			int nearest = SIZE * 2;
			if(park[i][j] == 1){continue;}
			for(int c = 0; c < cars; c++){
				// Taking manhatten distance to each car for a free slot.
				distance = absv(i, car_xs[c]) + absv(j, car_ys[c]);
				// Finding Nearest car for each slot.
				if(distance < nearest){
					nearest = distance;
				}
				distance = 0;
			}
			// From this nearest values finding the biggest.
			if(largest < nearest){
				largest = nearest;
				bestx = i;
				besty = j;
			}

			
		}
		
	}
	printf("Best Slot Found In: %d %d\n", bestx, besty);
	return 0;
	
}
