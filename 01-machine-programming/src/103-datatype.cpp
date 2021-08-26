#include <stdio.h>

int main() {
    char cha = 'A';
    printf("Character: cha = %c, %d bytes", cha, sizeof(char));

    int num = '10';
    printf("Interger: num = %d, %d bytes", num, sizeof(int));

    float flo = 9.81f;
    printf("Real number: flo = %f, %d bytes", flo, sizeof(float));
    getchar();
}