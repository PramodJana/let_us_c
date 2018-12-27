#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter the five digit number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        sum = sum+(num%10);
        num/=10;
    }
    printf("The sum of your number is %d", sum);
    return 0;
}
