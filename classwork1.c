#include<stdio.h>

int main()
{
    int a;
    char i;
    float c;
    // double d;
    
    printf("Enter a:");
    scanf("%d" , &a);

    printf("Enter i:");
    scanf("%c" , &i);

    printf("Enter c:");
    scanf("%f" , &c);

    // printf("Enter d:");
    // scanf("%f" , &d);

    printf("int:%d\n" , a);
    printf("char:%c\n" , i);
    printf("int:%f\n" , c);
    // printf("int:%f\n" , c);

    return 0;
}