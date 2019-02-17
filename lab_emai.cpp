#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void conc(char one[], char two[], char output[]){
	for(int i = 0; i < i + 1; i++){
		if(one[i] == 0){
			for(int j = i; j < j + 1; j++){
				output[j] = two[j - i];
				if(two[j -i] == 0){
					return;
				}
				
			}
		}
		output[i] = one[i];
	}
	return;
}


void int_to_str(int num, char out[]){
	for(int i = 0; i < 4; i++){
		int x = num%10 + 48;
		out[3 - i] = x;
		num = num/10;
	}
	return;
}



void add_end(char email[], char ending[]){
	for(int i = 0; i < i + 1; i++){
		if(email[i] == 0){
			for(int j = 0; j < j + 1;j++){
				email[i + j] = ending[j];
				if(ending[j] == 0){
					return;
				}
			}
		}
	}
}


void candidate_1(char name[], char surname[], char year[], char output[]){
	char ending[12] = "@itu.edu.tr";
	conc(name, surname, output);
	char last_two[3] = {year[2], year[3], year[4]};
	add_end(output, last_two);
	add_end(output, ending);
	return;
	
	
}

// 48 - 57
void candidate_2(char name[], char surname[], char output[]){
	char ending[12] = "@itu.edu.tr";
	srand(time(NULL));
	char year[5];
	for(int i = 0; i < 4; i++){
		int x = rand()%9 + 48;
		year[i] = x;
	}
	char start[5] = {name[0], name[1], surname[0], surname[1]};
	conc(start, year, output);
	add_end(output, ending);
	return;
	
}


void candidate_3(char name[], char surname[], char year[], char output[]){
	char ending[12] = "@itu.edu.tr";
	conc(surname, name, output);
	add_end(output, year);
	add_end(output, ending);
	return;
}


int main(){
	char name[50];
	char surname[50];
	char year[5];
	printf("Enter Name, Surname, birthyear: ");
	scanf("%s %s %s", name, surname, year);
	char email[200];
	candidate_1(name, surname, year, email);
	printf("candidate 1: %s\n", email);
	candidate_2(name, surname, email);
	printf("candidate 2: %s\n", email);
	candidate_3(name, surname, year, email);
	printf("candidate 3: %s\n", email);
	
	return 0;
}
