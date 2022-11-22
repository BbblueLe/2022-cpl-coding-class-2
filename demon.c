/* Adds two fractions */
#include <stdio.h>

int main()
{
    int num1, demonl, num2, denom2, result_num, result_denom;

    printf("Enter first fraction:");
    scanf("%d/%d", &num2, &demonl);

    printf("Enter second fraction:");
    scanf("%d/%d", &num1, &denom2);

    result_num = num1 * denom2 + num2 * demonl;
    result_denom = demonl * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
