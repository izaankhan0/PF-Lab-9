#include<stdio.h>

void main(){
	int n;
	int o = 0;
	printf("Enter N: ");
	scanf("%d", &n);
	int rows = (n) + 1;
	int col = n + 2;
	//Part 1
	for(int i = 0; i < rows; i++){
		o++;
		for(int j = 0; j < (col - o); j++){
			printf(". ");
		}
		for(int f = 0; f < o; f++){
			printf("O");
		}
		printf("\n");
	}
	//Part 2
	int z = n + 1;
	for(int i = 1; i < rows; i++){
		z--;
		for(int j = 0; j < (col - z); j++){
			printf(". ");
		}
		for(int f = 0; f < z; f++){
			printf("O");
		}
		printf("\n");
	}
	
}
