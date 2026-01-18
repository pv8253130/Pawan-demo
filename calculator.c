#include <stdio.h>
int main()
{
    int m, n, result;
    char j;

    printf("Enter the m number:");
    scanf("%d", &m);
    printf("enter the n number:");
    scanf("%d", &n);
    printf("Enter operator (+, -, *, /)");
    scanf(" %c", &j);

    switch (j)     
    {
        case '+':
            result = m + n;
            printf("%d+%d=%d\n",m,n,m+n);
            break;
              case '-':
            result = m - n;
            printf("%d-%d=%d\n",m,n,m-n);
            break;
             case '*':
            result = m * n;
            printf("%d*%d=%d\n",m,n,m*n);
            break;
            case '/':
            if (n != 0) {
                result = m / n;
                printf("%d/%d=%d\n",m,n,m/n);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
            default:
            printf("Wrong operation\n");
    }
     return 0;
}