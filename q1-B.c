#include<stdio.h>

void main(){
	int n, inc = 1, dec = 1;
	printf("Enter N: ");
	scanf("%d", &n);
	for (int z = 0; z < n; z++){
		for(int i = 1; i < inc; i++){
			printf("%d", i);
		}
//		printf("RUN");
		for(int j = dec; j > 0; j--){
			printf("%d", j);
		}
		
		dec++;
		inc++;
		printf("\n");
	}
	
}
