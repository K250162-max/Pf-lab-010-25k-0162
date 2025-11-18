#include<stdio.h>
#include<string.h>
int main(){
	char email[100];
	char domain[100];
	int place=0;
	printf("Enter email: ");
	scanf("%s",email);
	for(int i=0;i<strlen(email);i++){
		 if(email[i]=='@'){
		 	place=i;
		 }
	}
	if(place==0){
		printf("invalid Email");
		return 0;
	}
	else{
		int j=0;
		for(int i=place+1;email[i]!='\0';i++){
			domain[j]=email[i];
			j++;
		}
		domain[j]='\0';
		printf("Domain:%s",domain);
	}
	return 0;
}
