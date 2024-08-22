#include<stdio.h>
int main()
{
    float celsius;
    printf("enter the value of celsius\n");
    scanf("%f",&celsius);

    float far= ( celsius * 9 / 5) + 32;
    printf("convert the value of celsius to farenheit%f",far);

    return 0;
}