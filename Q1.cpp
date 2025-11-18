#include<stdio.h>
#include<string.h>
int main(){
    char password[100];
    int i;
    printf("Enter your password: ");
    scanf("%s",password);
    int isdigit=0,hasupper=0,hasspecial=0;

size_t length=strlen(password);
for(i=0;i<length;i++){
    char ch=password[i];
    if(ch>='A'&& ch<='Z'){
      hasupper=1;
    }
    if(ch>='0' && ch<='9'){
        isdigit=1;
    }
    if(ch=='!'|| ch=='@' || ch=='#' || ch=='$' || ch=='%'){
        hasspecial=1;
    }
}
if(hasspecial==1 && hasupper==1 && isdigit==1){
    printf("password Approved\n");
}
else{
    printf("password not approved");
}
}
