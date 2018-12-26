#include<stdio.h>
int main()
{
    int side1=1189, side2=841;
    int a=0;
    while(a<=8)
    {
        printf("The dimension of A%d is %d X %d\n", a,side1,side2);
        if(side1>side2)
        {
            side1= side1/2;
        }
        else
        {
            side2/= 2;
        }
        a++;
    }
    return 0;
}
