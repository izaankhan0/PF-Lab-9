#include<stdio.h>
#include<string.h>

void main(){
	char username[] = "admin";
	char password[] = "1234";
	
	char inp1[100];
	char inp2[100];
	
	printf("Enter username: ");
	scanf("%s", &inp1);
	printf("Enter password: ");
	scanf("%s", &inp2);
	
	
	if (strcmp(username, inp1) == 0 && strcmp(password, inp2) == 0){
		printf("Access granted");
	}else{
		printf("Access denied");
	}
	
	
}