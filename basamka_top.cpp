#include <stdio.h>



int basamak_top(int num){
	int total = 0;
	while(num > 9){
		total += num%10;
		num = num/10;
	}
	return total;
	
	
}

int main(){
	printf("%d", basamak_top(1456));
}
