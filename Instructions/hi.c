#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the amount\n");
    scanf("%d",&num);
    while(num!=0)
    {
        if(num>=100)
        {
            count++;
            num=num-100;
        }
        else if(num>=50)
        {
            count++;
            num-=50;
        }
                else if(num>=10)
        {
            count++;
            num-=10;
        }
                else if(num>=5)
        {
            count++;
            num-=5;
        }        else if(num>=2)
        {
            count++;
            num-=2;
        }        else
        {
            count++;
            num-=1;
        }
    }
    printf("The minimum number of notes is %d",count);
}
