#include <stdio.h>
#include <math.h>


int prime(int num){
    if(num == 1){
        return 0;
    }
    if(num == 2){
        return 1;
    }
    int num1 = num;
    for(int i = 2; i < num; i++){
        if(num1%i == 0){
            return 0;
        }
    }
    return 1;
}

int next_prime(int num){
    num = num + 1;
    while(!prime(num)){
        num = num + 1;
    }
    return num;
}


int main(){
    int i = 2;
    int total = 0;
    while(1){
        if(total + i > 1000000){
            printf("%d\n", i);
            break;
        }
        else{
            total = total + i;
        }
        i = next_prime(i);
    }
    int k = 2;
    while(1){
        if(prime(total)){
            printf("%d", total);
            break;
        }
        else{
            total = total - k;
            k = next_prime(k);
        }
        
    }
    
    
    
    
    
    
    
    
    
}
