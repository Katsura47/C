#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
	double a = 45.46;
	int b = a/1; 
	double c = a - b;
	int totalb = 0;
	int totalc = 0;
	while(1){
		if(b%10 == b){
			totalb += 1;
			break;
		}
		b = b/10;
		totalb += 1;
	}
	while(1){
		if(floor(c) == c){
			break;
		}
		c = c*10;
		totalc += 1;
		
	}
	printf("%d %d", totalb, totalc);
	
	
	
}
