#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main (){
	char str[1000];
	printf("Moi ban nhap mot chuoi: ");
	fgets(str,1000,stdin);
	int length=(int)strlen(str);
	int chuCai=0;
	int chuSo=0;
	int kiTu=0;
	for(int i=0;str[i]!='\0';i++){
		if(isalpha(str[i])){
			chuCai++;
		}
		if(isdigit(str[i])){
			chuSo++;
		}
	}
	kiTu=length-chuSo-chuCai-1;
	printf("so chu cai %d\n",chuCai);
	printf("so chu so %d\n",chuSo);
	printf("so ki tu dac biet %d\n",kiTu);
	
	
	return 0;
}
