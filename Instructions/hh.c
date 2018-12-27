#include<stdio.h>
int main()
{
    int c,d;
    printf("Enter the values of c and d\n");
    scanf("%d%d",&c,&d);
    int temp=c;
    c=d;
    d=temp;
    printf("The swapped values are c=%d and d=%d\n",c,d);
    return 0;
}
