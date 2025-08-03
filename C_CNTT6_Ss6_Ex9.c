#include <stdio.h>
int main() {
    int choice;
    do{
        printf("MENU\n"
       "1.Nhap 3 so\n"
       "2.Tong 3 so\n"
       "3.Trung binh cong 3 so\n"
       "4.So nho nhat\n"
       "5.So lon nhat\n"
       "6.Thoat\n"
       "Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                int a,b,c;
                printf("Moi nhap vao so thu nhat: ");
                scanf("%d", &a);
                printf("Nhap vao so thu hai: ");
                scanf("%d", &b);
                printf("Nhap vao so thu ba: ");
                scanf("%d", &c);
                break;
            case 2:
                int d=a+b+c;
                printf("Tong cua 3 so la: %d\n",d);
                break;
            case 3:
                int sum=(a+b+c)/3;
                printf("Trung binh cong cua 3 so la: %d\n",sum);
                break;
            case 4:
                if(a<b && a<c) {
                    printf("So nho nhat la: %d\n",a);
                }else if (b<c && b<a) {
                    printf("So nho nhat la: %d\n",b);
                }else if (c<a && c<b) {
                    printf("So nho nhat la: %d\n",c);
                }
                break;
            case 5:
                if(a>b && a>c) {
                    printf("So lon nhat la: %d\n",a);
                }else if (b>c && b>a) {
                    printf("So lon nhat la: %d\n",b);
                }else if (c>a && c>b) {
                    printf("So lon nhat la: %d\n",c);
                }
                break;
            case 6:
                printf("Da thoat\n");
            default:
                printf("So da chon khong hop le. Vui long chon lai\n");
        }
    }while (choice != 6);
}