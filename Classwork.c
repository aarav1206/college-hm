#include<stdio.h>

int main(){
    char a[50] , b[100] , c[50] , d[490];
    int e;
    
    printf("Your Name:" , a);
    scanf("%s", &a);
    
    printf("Your Address:" , b);
    scanf("%s" , &b);
    
    printf("department:" , c);
    scanf("%s" , &c);

    
    printf("course:" , d);
    scanf("%s" , &d);
   
    printf("Semester:" , e);
    scanf("%d" , &e);
    
    printf("My Name is %s\n" , a);
    printf("My Adress is %s\n" , b);
    printf("My Adress is %s\n" , c);
    printf("My course is %s\n" , d);
    printf("I'mm in %d semester\n" , e);

    return 0;
    
}