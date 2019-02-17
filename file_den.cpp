#include <stdio.h>
#include <stdlib.h>
#define max_lines 10000
#define line_leng 200
int main(void){


FILE *file = fopen("test.txt", "r");
char **book = (char**)(malloc)(sizeof(char)*max_lines);
int size = 0;
while (fgets(book[size],line_leng,file) != 0){
	if(book[size]==NULL)break;
	book[size] = malloc(line_leng);
	size++;
}
printf("\n");
for(int i = 0; i < size; i++){
	printf("%s", book[i]);
}






}
