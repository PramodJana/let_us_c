#include<stdio.h>
#include<math.h>
int main()
{
    float side1,side2,side3,area;
    printf("Enter the sides of a triangle\n");
    scanf("%f%f%f",&side1,&side2,&side3);
    float s=(side1+side2+side3)/2;
    area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
    printf("The area of a given triangle is %f", area);
    return 0;
}
