#include <stdio.h>
int main() {
    int number,number1;
    printf("Moi nhap vao so: ");
    scanf("%d",&number);
    for (int score=0; score<=number; score++) {
        number1+=score;
    }
        printf("%d \n", number1);

}