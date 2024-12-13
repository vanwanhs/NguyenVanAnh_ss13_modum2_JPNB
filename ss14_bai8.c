#include<stdio.h>
#include<string.h>
int main(){
	char str[1000];
	printf("Moi ban nhap mot chuoi bat ki ");
	fgets(str,1000,stdin);
	int length=(int)strlen(str);
	for(int i=0;str[i]!='\0';i++){
		if(i==0||str[i-1]==' '){
			if(str[i]>='a'&&str[i]<='z'){
				str[i]=toupper(str[i]);
			}
		}
	}
	printf("%",str);
	return 0;
}

