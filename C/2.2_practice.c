#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",& num);

    printf("check whether number is divisible by 97 is %d", num%97);
    return 0;
}