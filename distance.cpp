#include <stdio.h>


void print(int time_interval, int total_time, double distance, double velocity){
	printf("  Time(min.)     Distance(km)");
	printf("\n");
	printf("  ==========    ============");
	printf("\n");
	double dist = 0;
	for(int i = 0; i < total_time; i += time_interval){
		dist = velocity*i/60;
		printf("  %d", i);
		printf(" %.2lf",dist);
		printf("\n");
	}
	printf("  %d        %.2lf", total_time, distance);
	return;
}





int main(){
	double distance, velocity;
	int  time_interval, total_time;
	printf("Enter total distance(km): ");
	scanf("%lf", &distance);
	printf("Enter velocity(km/hour): ");
	scanf("%lf", &velocity);
	printf("Enter time interval(min): ");
	scanf("%d", &time_interval);
	total_time = (distance/(velocity/60));
	print(time_interval, total_time, distance, velocity);
		
}
