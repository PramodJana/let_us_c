#include<stdio.h>
int main()
{
    int x=30,y=40;
    if(x==y)
        printf("x is equal to y\n");
    elseif(x>y)
        printf("x is greater than y\n");
    elseif(x<y)
        printf("x is less than y\n");
    return 0;
}
/* error

||=== Build file: "no target" in "no project" (compiler: unknown) ===|
F:\let us c\Decision Control Instructions\bf.c||In function 'main':|
F:\let us c\Decision Control Instructions\bf.c|7|warning: implicit declaration of function 'elseif' [-Wimplicit-function-declaration]|
F:\let us c\Decision Control Instructions\bf.c|8|error: expected ';' before 'printf'|
F:\let us c\Decision Control Instructions\bf.c|10|error: expected ';' before 'printf'|
||=== Build failed: 2 error(s), 1 warning(s) (0 minute(s), 0 second(s)) ===|


*/

/*Answer
there should be space between "else if" and there should be else block after else if block at the end
*/
