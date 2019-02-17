#include <stdio.h>




double calculation(int n){
	double answ = n;
	for(int i = 0; i < n; i++){
		answ = 1 + 1/(answ);
	}
	return answ;
}


int main(){
	printf("%.2lf", calculation(4));
	printf("\n");
	printf("%.2lf", 23.0/14.0);
}
