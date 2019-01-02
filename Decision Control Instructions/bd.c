#include<stdio.h>
int main()
{
    int x=10;
    if(x>=2)then
        printf("%d\n",x);
    return 0;
}

/*error

||=== Build file: "no target" in "no project" (compiler: unknown) ===|
F:\let us c\Decision Control Instructions\bd.c||In function 'main':|
F:\let us c\Decision Control Instructions\bd.c|5|error: 'then' undeclared (first use in this function)|
F:\let us c\Decision Control Instructions\bd.c|5|note: each undeclared identifier is reported only once for each function it appears in|
F:\let us c\Decision Control Instructions\bd.c|6|error: expected ';' before 'printf'|
||=== Build failed: 2 error(s), 0 warning(s) (0 minute(s), 1 second(s)) ===|

*/

/* we cannot use then after if clause because it is not declared earlier */
