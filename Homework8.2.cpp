#include<stdio.h>
int main(){
	int a, i, count = 0, numbers[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	printf("Moi ban doan phan tu co trong mang: ");
	scanf("%d", &a);
	for(int i = 0; i <= 19 ; i++){
		if(a == numbers[i]){
			printf("Vi tri cua phan tu %d là %d\n", a, i);
			++count;	 
	    }
	}
	if(count == 0){
		printf("Phan tu khong ton tai khong mang");
	}
	return 0; 
} 
