#include<stdio.h>
#include<string.h>
int main (){
	char str[1000];
	printf("Moi ban nhap vao mot chuoi bat ki: ");
	fgets(str,1000,stdin);
	int length=(int)strlen(str);
	for (int i=0;i<length-1;i++){
		printf(" ki tu %d co trong mang: %c\n",i+1,str[i]);
	}
	
	return 0;
}
