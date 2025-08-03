#include <stdio.h>
int main() {
    int number=52;
    int number2;
    do {
        printf("Nhap vao so: ");
        scanf("%d",&number2);
    }while(number2!=number);
}