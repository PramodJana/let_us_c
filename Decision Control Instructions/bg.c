#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",a,b);
    if(a>b);
    printf("This is a game\n");
    else
        printf("you have yo play it\n");
    return 0;
}
/*error

||=== Build file: "no target" in "no project" (compiler: unknown) ===|
F:\let us c\Decision Control Instructions\bg.c||In function 'main':|
F:\let us c\Decision Control Instructions\bg.c|8|error: 'else' without a previous 'if'|
||=== Build failed: 1 error(s), 0 warning(s) (0 minute(s), 0 second(s)) ===|

*/

/*Answer
since there is a termination of if clause after the condition
so next printf is considered as a new statement rather than the part of the if block
so else block is unable to find its associated if block*/
