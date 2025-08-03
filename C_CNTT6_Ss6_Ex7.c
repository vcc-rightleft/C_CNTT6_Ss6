#include <stdio.h>
int main() {
    int num1, num2,ucln;

    printf("NHAP VAO SO THU NHAT: ");
    scanf("%d", &num1);
    printf("nHAP VAO SO THU HAI: ");
    scanf("%d", &num2);
    if (num1 == 0 && num2 == 0) {
        printf("LOI.\n");
        return 0;
    }
    if (num1 == 0 || num2 == 0) {
        ucln = (num1 == 0) ? num2 : num1;
        if (ucln < 0) {
            ucln = -ucln;
            printf("UOC CHUNG LON NHAT: %d\n", ucln);
        }
        return 0;
    }
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        }else{
        num2 -= num1;
    }
    }
    printf("UOC CHUNG LON NHAT: %d\n", num1);
    return 0;
}
