#include<stdio.h>
int main(){
	int numbers[3][3] = {
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9}
	};
	int sum; 
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j == 3 - 1 - i){
				sum += numbers[i][j]; 
			}
		} 
	}
	printf("Tong cua cac phan tu duong cheo phu la %d\n", sum);
	return 0; 
} 
