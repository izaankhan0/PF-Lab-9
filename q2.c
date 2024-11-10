#include<stdio.h>

void main(){
	int boltsP = 5, nutsP = 3, washersP = 1, nuts, washers, bolts, flag = 0;
	printf("Enter number of Nuts:      ");
	scanf("%d", &nuts);
	printf("Enter number of Washers:   ");
	scanf("%d", &washers);
	printf("Enter number of Bolts:     ");
	scanf("%d", &bolts);
	printf("\n");
	
	int total = (bolts * boltsP) + (washers * washersP) + (nuts * nutsP);
	
	if (nuts < bolts){
		printf("Check the Order: too few nuts");
		flag = 1;
	}
	if ((2 * washers) < bolts){
		printf("Check the Order: too few washers");
		flag = 1;
	}
	if (flag == 0){
		printf("Order is OK.");
	}
	
	printf("\nTotal Cost: %d", total);
}