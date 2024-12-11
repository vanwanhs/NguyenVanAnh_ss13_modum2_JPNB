#include<stdio.h>
#include<string.h>
int main (){
	char str[1000];
	printf("Moi ban nhap chuoi: ");
	fgets(str,1000,stdin);
	int count =0;
	char *myStr=strtok(str," ");
	while(myStr != NULL){
		count++;
		myStr=strtok(NULL," ");
	}
	printf("So phan tu co trong chuoi la %d",count);
	return 0;
}
