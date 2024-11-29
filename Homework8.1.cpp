#include<stdio.h>
int main(){
	int i; 
	int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for(int i = 9; i >= 0 ; i--){
		printf("numbers[%d] = %d\n", i, numbers[i]); 
	}
	return 0; 
} 

