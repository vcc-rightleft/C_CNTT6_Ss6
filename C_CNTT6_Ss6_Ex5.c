#include <stdio.h>
int main() {
    int number,sum,number1;
    for (number = 1; number < 10; number++) {
        for (sum = 1; sum < 10; sum++) {
            number1 = number * sum;
            printf("%dx%d=%d\n", number,sum,number1);
        }
    }
}