#include <stdio.h>
int main()
{
    float length,breadth,radius;
    printf("Enter the length of a rectangle\n");
    scanf("%f",&length);
    printf("Enter the breadth of a rectangle\n");
    scanf("%f",&breadth);
    printf("Enter the radius of a circle\n");
    scanf("%f",&radius);
    printf("The area of a given rectangle is %.2f\n", (length*breadth));
    printf("The area of a given circle is %.2f\n", (3.14*radius*radius));
    printf("The circumference of the given circle is %.2f\n", (2*3.14*radius));
    return 0;
}
