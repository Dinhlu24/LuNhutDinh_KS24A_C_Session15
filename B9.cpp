#include <stdio.h>
#include <string.h>

int main(){
	char str[]="hello world";
	printf("Day la chuoi ban co: %s\n",str);
	char deleteC;
	printf("Moi nhap vao ky tu bat ki: ");	scanf("%c",&deleteC);
	
	int j=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i] != deleteC){
			str[j++] = str[i];
		}
	}
	str[j]='\0';
	
	printf("%s",str);
}
