#include <stdio.h>
#include <ctype.h>

int main() {
    char chuoi[1000];
    int soKyTuCai = 0;
    printf("Nhap mot chu bat ki: ");
    fgets(chuoi,1000, stdin);
    printf("ky chu co trong mang: ");
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i])) {
        	printf("%c\t",chuoi[i]);
            soKyTuCai++;
        }
    }
    printf("So ki tu chu cai co trong mang: %d\n", soKyTuCai);
    return 0;
}

