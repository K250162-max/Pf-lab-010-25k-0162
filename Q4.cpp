#include <stdio.h>
#include <string.h>

int main() {
    char message[100];
    printf("Enter a message: ");
    fgets(message,100,stdin);
    message[strcspn(message, "\n")] = '\0'; 
    int length = strlen(message);
    for(int i=0;i<length;i++) {
    	char ch=message[i];
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
            message[i]=message[i]+3; 
        }
    }

    printf("Encrypted message: %s\n", message);
    for(int i=0;i<length;i++){
    	char ch=message[i];
    	if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
    		message[i]=message[i]-3;
		}
	}
	printf("decrypted message: %s\n",message);
    return 0;
}

