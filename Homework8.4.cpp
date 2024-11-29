#include<stdio.h>
int main(){
	int numbers[2][3] = {{2, 6, 5},{9, 4, 7}};
	int i, max;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			if(numbers[i][j] > max){
				max = numbers[i][j]; 
			} 
		} 
	}
	printf("Phan tu lon nhat mang là %d\n", max);
	return 0; 
} 
