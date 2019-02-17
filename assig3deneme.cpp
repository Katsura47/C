#include <stdio.h>
#include <stdlib.h>




int min(int n1, int n2){
	if(n1 < n2){
		return n1;
	}
	else{
		return n2;
	}
}


int finding_best(int cars_locs[],int park_size,int car_nums){
	int total = 0;
	int largest = 0;
	int best = 0;
	for(int i = 1; i < park_size + 1; i++){
		for(int c = 0; c < car_nums; c++){
			total += abs(i - cars_locs[c]);
		}
		if(total == largest){
			best = min(i, best);
		}
		else if(total > largest){
			best = i;
			largest = total;
			}
		
		total = 0;
	}
	return best;
}
int main(){
	int size = 0;
	int cars = 0;
	//taking Size of parking area and number of cars.
	printf("Size: ");
	scanf("%d", &size);
	printf("Cars: ");
	scanf("%d", &cars);
	int array[size][size];
	if(cars > size*size){
		return EXIT_FAILURE;
	}
	if(cars == size*size){
		printf("0 0");
		return EXIT_FAILURE;
	}
	//
	int car_xs[cars];
	int car_ys[cars];
	int x, y;
	// Taking locations of cars.
	for(int i = 0; i < cars; i++){
		printf("Locations: ");
		scanf("%d %d", &x, &y);
		car_xs[i] = x;
		car_ys[i] = y;
		array[x][y] = 1;
		
		
		
	}
	// finding best x location.
	int bestx = finding_best(car_xs, size, cars);
	// finding best y location.
	int besty = finding_best(car_ys, size, cars);
	// As assignment says.
	int total = 0;
	int largest = 0;
	int bestxx, bestyy;
	for(int i = 1;i < size + 1; i++){
		
		for(int j = 1; j < size + 1; j++){
			// If it is not free
			if(array[i][j] == 1){continue;}
			// Calculating The distance to cars.
			for(int c = 0; c < cars; c++){
				total += abs(i - car_xs[c]) + abs(j - car_ys[c]);
				
			}
			// If it is further than the previous place take over it.
			if(total >= largest){
				if(total == largest){
					bestxx = min(bestxx, i);
					bestyy = min(bestyy, j);
				}
				else{
					bestxx = i;
					bestyy = j;
					}
				largest = total;
			}
			total = 0;
		}
	}
	// merge best x and best y locations -|- .
	printf("Best Slot Found In: %d %d\n", bestx, besty);
	printf("Best Slot Found In: %d %d", bestxx, bestyy);
}  
