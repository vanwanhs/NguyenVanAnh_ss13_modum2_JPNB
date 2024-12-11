#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Moi ban nhap chuoi: ");
	fgets(str,100,stdin);
	int length=(int)strlen(str);
	printf("Cac ki tu co trong mang:");
	for (int i=0;i<length;i++){
		printf("%c\t",str[i]);
	}
	
	
	
	return 0;
}
