#include<stdio.h>
int main() {
    int number,sum;
    printf("Moi nhap vao so: ");
    fflush(stdin);
    scanf("%d",&number);
        for(int i=1;i<=10;i++) {
            sum=number*i;
            printf("%dx%d=%d\n",number,i,sum);
        }
    }
