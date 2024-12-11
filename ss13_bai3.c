#include<stdio.h>
#include<string.h>
int main (){
	char string[]="anh yeu em";
	int length=(int)strlen(string);
	for(int i=length;i>=0;i--){
		printf("%c",string[i]);
		
	}
	return 0;
}
