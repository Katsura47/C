#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr = (int*)malloc(sizeof(int)*10);

	int x = 10;
	for(int i = 0;i < 5; i++){
		arr = &x;
		x = x + 1;
		*arr = *(arr + 1);
	}
	for(int i = 0; i < 5; i++){
	printf("%d", *arr);
	*arr = *(arr + 1);
	}
	
	
	

	
	
	
}
