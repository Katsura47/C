#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	srand(time(NULL));
	int pr_door;
	int m_door;
	double change;
	double not_change;
	int iteration = 10000;
	double bolum = iteration / 100;
	for(int i = 1; i <= iteration; i++){
		pr_door = 1 + rand()%3;
		m_door = 1 + rand()%3;
		if(m_door == pr_door){
			not_change++;
		}
		else{
			change++;
		}
	}
	printf("%lf is probability of winning with changing door.\n", change/bolum);
	printf("%lf is probability of winning with not changing door.\n", not_change/bolum);
	return 0;
	
	 	
}
