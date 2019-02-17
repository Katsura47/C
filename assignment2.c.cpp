#include <stdio.h>
#include <stdlib.h>


// Score Of throwing
int dart_score(int segment, char ring){

	switch(ring){
		case 'I':
			return 50;
		case 'O':
			return 25;
		case 'S':
			return segment;
		case 'D':
			return segment * 2;
		case 'T':
			return segment * 3;
	}
	
	return 0;
}
//---

// The remaining Point.
int game(int points, int segment, char ring){
	int remain;

	remain = points - dart_score(segment, ring);
	if(remain < 0){
		remain = points;
	}
	else if(remain == 0 && ring != 'D'){
		remain = points;
	}
	else if(remain == 1){
		remain = points;
	}
	return remain;
}
//---

// For the start of the game
bool start_game(char ring){
	if(ring == 'D'){
		return false;
	}
	return true;
}
//---


int main(){
	int target_value;
	printf("Target: ");
	scanf("%d", &target_value);
	printf("\n");
	int segment;
	bool starting = true;
	char ring;
	int dart_score = 0;
	// starting the game with 'D'
	do{
		printf("Throw: ");
		scanf("%d %c", &segment, &ring);
		starting = start_game(ring);
		if(!starting ){
			target_value = game(target_value, segment, ring);
		}
		printf("Points: %d\n", target_value);
	}
	//
	while(starting);
	// Playing Game
	while(target_value != 0){
		printf("Throw: ");
		scanf("%d %c", &segment, &ring);
		target_value = game(target_value, segment, ring);
		printf("Points: %d\n", target_value);
	}
	//-----
	
	
	return 0;
	
	
}
