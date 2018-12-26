#include<stdio.h>
int main()
{
    int m1,m2,m3
    printf("Enter values of marks in 3 subjects")
    scanf("%d%d%d",&m1,&m2,&m3)
    printf("You entered %d %d %d", m1,m2,m3);
}
/*error
||=== Build file: "no target" in "no project" (compiler: unknown) ===|
F:\let us c\Getting Started\ed.c||In function 'main':|
F:\let us c\Getting Started\ed.c|5|error: expected '=', ',', ';', 'asm' or '__attribute__' before 'printf'|
||=== Build failed: 1 error(s), 0 warning(s) (0 minute(s), 0 second(s)) ===|
*/

/*answer
statement terminator is missing in 3 statements
the correct answer is
#include<stdio.h>
int main()
{
    int m1,m2,m3
    printf("Enter values of marks in 3 subjects");
    scanf("%d%d%d",&m1,&m2,&m3);
    printf("You entered %d %d %d", m1,m2,m3);
}
