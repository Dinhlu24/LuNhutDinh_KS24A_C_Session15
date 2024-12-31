#include <stdio.h>
#include <string.h>

int main(){
	char str[]="Hello my gmail is test123@gmail.com";
	int countChar=0,countNum=0,countSpec=0;
	
	for(int i=0;i<strlen(str);i++){
		int dec=str[i];
		if(dec >= 65 && dec <= 90 || dec >= 97 && dec <= 122)	countChar++;
		else if(dec >= 48 && dec <= 57)	countNum++;
		else{
			countSpec++;
		}
	}
	printf("So ky tu la chu cai:%d\nSo ky tu la chu so:%d\nSo ky tu dac biet:%d",countChar,countNum,countSpec);
}
