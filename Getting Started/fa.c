#include<stdio.h>
int main()
{
    float basic, da , hra , gross;
    printf("Enter the basic salary of the employee\n");
    scanf("%f",&basic);
    da= basic* 0.4;
    hra= basic *0.2;
    gross= basic + da+ hra;
    printf("The gross salary of the Employee :%.2f", gross);
}
