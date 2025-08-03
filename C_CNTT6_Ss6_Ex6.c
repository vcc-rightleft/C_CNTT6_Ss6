#include <stdio.h>
#include <math.h>

int main() {
    float number1, number2, sum;
    int choice;

    printf("Moi nhap vao so thu nhat: ");
    scanf("%f", &number1);
    printf("Moi nhap vao so thu hai: ");
    scanf("%f", &number2);

    do {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                sum = number1 + number2;
                printf("%.0f + %.0f = %.0f\n", number1, number2, sum);
                break;
            case 2:
                sum = number1 - number2;
                printf("%.0f - %.0f = %.0f\n", number1, number2, sum);
                break;
            case 3:
                sum = number1 * number2;
                printf("%.0f * %.0f = %.0f\n", number1, number2, sum);
                break;
            case 4:
                if(number2 == 0) {
                    printf("Khong the chia cho 0\n");
                } else {
                    sum = number1 / number2;
                    printf("%.2f / %.2f = %.2f\n", number1, number2, sum);
                }
                break;
            case 5:
                printf("Da thoat\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while(choice != 5);

    return 0;
}
