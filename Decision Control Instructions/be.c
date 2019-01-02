#include<stdio.h>
int main()
{
    int x=10,y=15;
    if(x%2=y%3)
        printf("Carpathians\n");
    return 0;
}
/*error
||=== Build file: "no target" in "no project" (compiler: unknown) ===|
F:\let us c\Decision Control Instructions\be.c||In function 'main':|
F:\let us c\Decision Control Instructions\be.c|5|error: lvalue required as left operand of assignment|
||=== Build failed: 1 error(s), 0 warning(s) (0 minute(s), 0 second(s)) ===|
*/

/*Answer
we cannot assign a value to a value
*/
