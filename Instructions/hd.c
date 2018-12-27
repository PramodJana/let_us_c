#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,v;
    printf("Please enter the coordinates of x and y\n");
    scanf("%f%f",&x,&y);
    r=sqrt(pow(x,2)+pow(y,2));
    v=atan(y/x);
    printf("Your polar coordinates is (%.2f,%.2f)",r,v);
    return 0;
}
