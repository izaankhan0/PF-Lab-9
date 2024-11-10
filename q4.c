#include<stdio.h>
#include<string.h>

void main(){
	char names[6][20] = {"izaan", "talha", "bilal", "ismail", "azeem", "rafay"};
	char nameInp[30];
	int flag = 0;
	
	printf("Enter a name to search: ");
	scanf("%s", &nameInp);
		
	for(int i = 0; i < strlen(names); i++){
		if (strcmp(nameInp, names[i])  == 0){
			flag = 1;
		}
	}
	
	if(flag == 1){
		printf("Found");
	}else{
		printf("Not Found");
	}


}