#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<limits.h>

double random(double lower_limit, double upper_limit){
	srand(time(NULL));
	double x = lower_limit + (upper_limit - lower_limit)*rand()/RAND_MAX;
	printf("%lf", x);
	return x;
}

double pi(int max_iteration){
	return 0;
}




int main(){
	srand(time(NULL));
	double x = ((1+rand())%100)/100;
	printf("%lf",x);
}

