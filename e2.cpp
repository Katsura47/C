#include <stdio.h>



int factop(int num){
	int total = 0;
	int num1 = num;
	for(int i = 2; i < num1; i++){
		if(num%i == 0){
			total += (num/i) + i;
			num = num1/i;	
		}
	return total + 1;
	}
}


int main(){
	int total = 0;

	for(int i = 11; i < 29000; i++){
		if(factop(i) > i){
			total++;
		}
	}
	printf("%d", total);
	
	
	
}
