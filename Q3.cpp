#include<stdio.h>
#include<string.h>

int main(){
	char text[50];
	int i,vowel=0,consonent=0,digit=0,spaces=0;
	printf("Enter a sentence: ");
	fgets(text,50,stdin);
	size_t length=strlen(text);
	text[strcspn(text, "\n")] = '\0';
	for(i=0;i<length;i++){
		char ch = text[i];
		if(ch>='0' && ch<='9'){
			digit++;
		}
		else if(ch==' '){
			spaces++;
		}
		else if(ch=='A' || ch=='a' || ch=='E'|| ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u'){
			vowel++;
		}
		else{
			consonent++;
		}
	}
	printf("\nSTATISTICS\n");
	printf("Vowels: %d\n",vowel);
	printf("Consonants: %d\n",consonent);
	printf("Digits: %d\n",digit);
	printf("Spaces: %d",spaces);
	return 0;
}
