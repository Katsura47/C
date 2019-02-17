#include <stdio.h>

int main(){
	int index = 7;

	int mod_3 = index%3;
	int answer_a, answer_b;
	
	// 4 6 8 10 en yakın ve bir solundakini bulmak için.
	int neares = (index/3)*2;
	if(mod_3 == 1 || mod_3 == 2){
		if(mod_3 == 1){
			answer_a = 1;
			answer_b = 1;
		}
		else{
			answer_a = 2;
			answer_b = 1;
		}

	}

	else{
		answer_a = 2*neares + 1;
		answer_b = neares + 1;
		neares = neares - 2;
		index = index - 3;
	}
	for(int i = 0; i < (index/3) - 1; i++){
		int answer_a2 = (2*neares + 1)*answer_a + 2*answer_b;
		int answer_b2 = (neares + 1)*answer_a + answer_b;
		answer_a = answer_a2;
		answer_b = answer_b2;
		neares -= 2;
		}
	answer_a = 8*answer_a + 3*answer_b;
	printf("%d", answer_a);
	
	
	
	
	return 0;
}
