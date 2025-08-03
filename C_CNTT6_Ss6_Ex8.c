#include <stdio.h>

int main() {
    int num1, num2;

    printf("NHAP VAO SO THU NHAT: ");
    scanf("%d", &num1);
    printf("NHAP VAO SO THU HAI: ");
    scanf("%d", &num2);

    if (num1 == 0 && num2 == 0) {
        printf("LOI.\n");
        return 0;
    }

    if (num1 == 0 || num2 == 0) {
        printf("BOI CHUNG NHO NHAT LA: 0\n");
        return 0;
    }

    int a = (num1 < 0) ? -num1 : num1;
    int b = (num2 < 0) ? -num2 : num2;
    while (a != b) {
        if (a > b) {
            a -= b;
        }else {
            b -= a;
        }
    }
    int ucln = a;
    int bcnn = (a * b) / ucln;

    printf("BOI CHUNG NHO NHAT: %d\n", bcnn);
    return 0;
}
