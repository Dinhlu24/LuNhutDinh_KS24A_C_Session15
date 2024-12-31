#include <stdio.h>
#include <string.h>

int main(){
	char str[]="hello world";
	printf("Day la chuoi ban co: %s\n",str);
	char deleteC;
	printf("Moi nhap vao ky tu bat ki: ");	scanf("%c",&deleteC);
	
	int size = strlen(str);
	for(int i=0;i<size;i++){
		if(str[i] == deleteC){
			for(int j=i;j<size-1;j++){
				str[j] = str[j+1];
				if(j == size-2)	str[j+1]='\0';
			}
		}
		if(i == 0 && str[i]>=97 && str[i]<=122)	str[i] -= 32;
		else if(str[i] == ' ' && str[i+1]>=97 && str[i+1]<=122)	str[i+1] -=32;
	}
	printf("%s",str);
}
