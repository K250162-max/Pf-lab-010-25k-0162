#include<stdio.h>
#include<string.h>

#define n 2
#define maxcourse 10
#define size 50
int main(){
	char students[n][size];
	char course[n][maxcourse][size];
	int  coursecount[n];
	int i,j;
	for(i=0;i<n;i++){
		printf("Enter students name: ");
		scanf("%s", students[i]);
		printf("\nEnter numer of courses you have registered:");
		scanf("%d",&coursecount[i]);
		
	for(j=0;j<coursecount[i];j++){
		printf("\n %d course of %s: ",j+1,students[i]);
		scanf("%s", course[i][j]);
		}
	printf("\n");
	} 
	printf("\n   All students and their courses    \n");
	for(i=0;i<n;i++){
		printf("%s: ",students[i]);
		for(j=0;j<coursecount[i];j++){
			printf("%s",course[i][j]);
			if(j<coursecount[i]-1){
				printf(",");
			}
		}
		printf("\n");
	}
	char searchcourse[size];
	int found=0;
	printf("Enter course to search: ");
	scanf("%s",searchcourse);
	for(i=0;i<n;i++){
	   for(j=0;j<coursecount[i];j++){
	   	if(strcmp(course[i][j],searchcourse)==0){
	   		printf("\n%s has course %s\n",students[i],searchcourse);
	   		found=1;
	   		break;
	     }
	   }	   
	}
	if(found==0){
		printf("\nNone of the students have taken this course");
	}
	printf("\n  overloaded students  \n");
	int overloaded=0;
	for(i=0;i<n;i++){
		if(coursecount[i]>3){
			printf("%s:%d courses So Overloaded\n",students[i],coursecount[i]);
			overloaded=1;
		}
	}
	if(overloaded==0){
		printf("None of the students are overloaded");
	}
	return 0;
}
