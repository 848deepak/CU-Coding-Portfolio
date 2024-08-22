#include<stdio.h>
int main()
{
    int age;
    printf("Ener your age \n");
    scanf("%d", & age);

    if(age>=90 && age<=18)
    {
    printf("you can not drive");
    }
    else{
        printf("You can drive");
    }
    return 0;
}