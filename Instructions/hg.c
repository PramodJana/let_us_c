#include<stdio.h>
#include<math.h>
int main()
{
    float angle;
    printf("Enter the angle\n");
    scanf("%f",&angle);
    printf("The sin angle of a given angle is %.2f\n",(sin(angle)));
    printf("The cos angle of a given angle is %.2f\n",(cos(angle)));
    printf("The tan angle of a given angle is %.2f\n",(tan(angle)));
    printf("The sin inverse angle of a given angle is %.2f\n",(asin(angle)));
    printf("The cos inverse angle of a given angle is %.2f\n",(acos(angle)));
    printf("The tan inverse angle of a given angle is %.2f\n",(atan(angle)));
}
