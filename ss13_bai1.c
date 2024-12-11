#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Moi ban nhap chuoi: ");
    fgets(str,1000, stdin);
    //str[strcspn(str, "\n")] = 0;
// loai bo phan tu cuoi 0\//
    int length=strlen(str);
    printf("chuoi ban vua nhap la: %s\n", str);
    printf("do dai cua chuoi la: %d\n",length);

    return 0;
}

