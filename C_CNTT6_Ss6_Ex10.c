#include <stdio.h>
int main(){
    int number,newNumber;
    printf("Moi nhap vao so nguyen bat ky: ");
    scanf("%d", &number);
    while(number != 0) {
        int sum= number%10;
        newNumber=newNumber*10+sum;
        number=number/10;
    }
    while (newNumber != 0) {
        int sum= newNumber%10;
        printf("%d \n", sum);
        newNumber=newNumber/10;
    }
}
