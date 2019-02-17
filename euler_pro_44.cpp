#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int pa(int a){
    return a*(3*a - 1)/2;
}

int add(int a, int b){
    int p_t = pa(a) + pa(b);
    double t = sqrt(((double)p_t/3)*2 + 1.0/36) + 1.0/6;
    if((int)t == t){
        return 1;
    }
    return 0;
}

int sb(int a, int b){
	int p_f = abs(pa(a) - pa(b));
	double f = sqrt(2*((double)p_f/3) + 1.0/36) + 1.0/6;
	if((int)f == f){
		return 1;
	}
	return 0;
}


int main(){
    int k = 0;
    for(int a = 1; a < 3000; a++){
    	for(int b = 1; b < 3000; b++){
    		if(add(a, b) && sb(a, b)){
    			printf("%d", abs(pa(a) - pa(b)));
    			k = 1;
    			break;
			}
		}
		if(k){
			break;
		}
	}
}
