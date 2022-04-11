#include <stdio.h>

int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    if (i % 2 == 0)
        printf("Number is divisible by 2");
    else
        printf("Number is not divisible by 2");
}