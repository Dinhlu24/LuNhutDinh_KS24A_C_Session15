#include <stdio.h>
#include <string.h>

int main(){
	char str[]="hello world";
	for(int i=0;i<strlen(str);i++){
		if(i == 0 && str[i]>=97 && str[i]<=122)	str[i] -= 32;
		
		else if(str[i] == ' ' && str[i+1]>=97 && str[i+1]<=122)	str[i+1] -=32;
	}
	printf("%s",str);
}
