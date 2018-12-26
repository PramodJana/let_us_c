#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the marks of five subjects\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int aggr= a+b+c+d+e;
    float avg= aggr/5;
    printf("The aggregated mark is %d\n",aggr);
    printf("The average mark is %.2f\n", avg);
    return 0;
}
