#include <stdio.h>

int denk(int n, int a, int b){
    return n*n + a*n + b;
}



int prime(int num){
    if(num < 0 || num == 1){
        return 0;
    }
    else if(num == 2){
        return 1;
    }
    int num1 = num;
    for(int i = 2; i < num; i++){
        if(num1%i == 0){
            return 0;
        }
        num = num1/i + 1;
    }
    return 1;
}


int main(){
    int largest = 0;
    int x;
    for(int b = 0; b < 1000; b++){
        if(prime(b)){
            for(int a = -b; a < 1000; a++){
                if(!prime(1 + a + b)){
                    continue;
                }
                int n = 0;
                int count = 0;
                while(1){
                    if(!prime(denk(n, a, b))){
                        break;
                    }
                    count += 1;
                    n += 1;
                }
                if(count > largest){
                    largest = count;
                    x = a*b;
                }
            }
        }
    }
    printf("%d", x);
}
