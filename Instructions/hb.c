#include<stdio.h>
int main()
{
    int num,rev=0,temp;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        temp=num%10;
        rev=rev*10+temp;
        num /= 10;
    }
    printf("The reverse of a number is %d",rev);
    return 0;
}
