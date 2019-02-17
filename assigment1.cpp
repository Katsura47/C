#include <stdio.h>
#include <stdlib.h>


int main(){
	int day, month, s_year, e_year, j, k;
	printf("Enter date [year month day]: ");
	scanf("%d %d %d", s_year, month, day);
	printf("Enter end year: ");
	scanf("%d", e_year);
	if(day > 31 || day < 1 || month < 1 || month > 12){
		printf("Invalid date ");
		return EXIT_FAILURE;
	}
	
	switch(month){
		case 2:
			if(day > 28){
				printf("Invalid date ");
				return EXIT_FAILURE;
			}
		case 4:
		case 6:
		case 9:
		case 11:
			if(day > 30){
				printf("Invalid date ");
				return EXIT_FAILURE;
			}
	}
	if(month == 1 || month == 2){
		month += 12;
		s_year -= 1;
	}
	k = s_year%100;
	j = s_year/100;
	int weekday = (day + 13*(month + 1)/5 + k + j/4 + k/4 + 5*j)%7;
	switch(weekday){
		case 0:
			printf("It is Saturday");
		case 1:
			printf("It is Sunday");
		case 2:
			printf("It is Monday");
		case 3:
			printf("It is Tuesday");
		case 4:
			printf("It is Wednesday");
		case 5:
			printf("It is Thursday");
		case 06:
			printf("It is Friday");
	}
	int total = 0;
	int weekday_2;
	for(int i = s_year; i <= e_year; i++){
		k = i%100;
		j = i/100;
		weekday_2 = (day + 13*(month + 1)/5 + k + j/4 + k/4 + 5*j)%7;
		if(weekday_2 == weekday){
			total++;
		}
		
	}
	printf("Same day-and-month on same weekday between %d and %d: %d", s_year, e_year, total);
	return EXIT_SUCCESS;
	
	
	
	
}
