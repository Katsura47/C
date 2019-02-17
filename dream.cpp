#include <stdio.h>



int main(){
	int recursive_;
	printf("Enter the recurison level of dreams: ");
	scanf("%d", &recursive_);
	printf("To live in a dream\n");
	for(int i =0; i < recursive_; i++){
		for(int j = 0; j < i + 1; j++){
			printf("***");
		}
		if(i == recursive_ - 1){
			printf("as a rank 1 thief\n");
			break;
		}
		printf("as a rank %d thief within a dream\n", recursive_ - i);
	}
	for(int i = 2; i < recursive_ + 2; i++){
		for(int j = i; j < recursive_ + 2 ; j++){
			printf("***");
		}
		printf("caught by the police of rank %d\n", i);
	}
	printf("makes hard to unravel th inception");
	
	
	
	
}
