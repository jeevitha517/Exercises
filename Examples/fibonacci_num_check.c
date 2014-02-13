#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, temp, num, flag = 0, sum = 0;
    
    printf("Enter a number to find whether num is Fibonacci num or not : ");
    scanf("%d", &num);

    while (sum <= num) {
        if(sum == num) {
            flag = 1;
        }
        temp = n2;
        n1 = temp;
        n2 = sum;
        sum = n1 + n2;
    }
    
    if (flag == 1) {
        printf("%d is fibonacci number\n", num);
    }
    else {
        printf("%d is not fibonacci number\n", num);
    }

    return 0;
}    
