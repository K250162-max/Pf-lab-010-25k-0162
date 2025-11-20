#include <stdio.h>
#include <stdlib.h>

 int main()
{
 int num;
 FILE *fptr;
 fptr = fopen("demo.txt","r");
 
 if(fptr==NULL){
 	printf("ERROR 404 not found\n");
 	return 0;
 }
 int vowelcount=0,consonentcount=0;
 char c;
 while((c=fgetc(fptr))!=EOF){
 	if(c=='a'|| c=='A' || c=='e'|| c=='E'||c=='o'|| c=='O'||c=='i'|| c=='I'||c=='u'|| c=='U'){
 	    vowelcount++;
	 }
	 else{
	 	consonentcount++;
	 }
 }
 printf("Vowel:%d\n",vowelcount);
 printf("Consonent:%d",consonentcount);
 
 fclose(fptr);
 return 0;
}
