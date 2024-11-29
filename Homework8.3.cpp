#include<stdio.h>
int main(){
	int i;
	printf("Moi ban nhap so hang cot de tao mang: "); 
	scanf("%d", &i); 
	int numbers[i][i];
	for(int a = 0; a < i; a++){
		for(int b = 0; b < i; b++){
			printf("numbers[%d][%d] = ", a, b);
			scanf("%d", &numbers[a][b]); 
		}
	}
	for(int a = 0; a < i; a++){
		for(int b = 0; b < i; b++){
			printf("%d ", numbers[a][b]); 
		}
		printf("\n"); 
	}
	
	return 0; 
} 
