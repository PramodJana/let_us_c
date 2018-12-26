#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d",a,b,c);
}

/*Answer
trying to input a value without specifying its address location
correct answer is
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
}
*/
