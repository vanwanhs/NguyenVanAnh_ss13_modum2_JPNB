#include <stdio.h>
#include <string.h>

void countCharacters(const char *str) {
    int count[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("Tan suat xuat hien cac ky tu:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Nhap chuoi bat ky: ");
    scanf("%99s", str);

    countCharacters(str);

    return 0;
}

