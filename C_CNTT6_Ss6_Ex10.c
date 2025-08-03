#include <stdio.h>
#include <stdlib.h>
int main() {
    int number;
    printf("Moi nhap vao so nguyen bat ky: ");
    scanf("%d", &number);
    int number1= abs(number);
    while (number1 != 0) {
        int sum=number1%10;
        printf(":%d\n",sum);
        number1/=10;
    }
}