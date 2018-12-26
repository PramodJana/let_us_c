/*question*/
int main()
{
	int a, float b, int c;
	a=25;
	b=3.24;
	c=a+b*b-35;
}

/*error*/
/*||=== Build file: "no target" in "no project" (compiler: unknown) ===|
F:\let us c\Getting Started\ea.c||In function 'main':|
F:\let us c\Getting Started\ea.c|4|error: expected identifier or '(' before 'float'|
F:\let us c\Getting Started\ea.c|6|error: 'b' undeclared (first use in this function)|
F:\let us c\Getting Started\ea.c|6|note: each undeclared identifier is reported only once for each function it appears in|
F:\let us c\Getting Started\ea.c|7|error: 'c' undeclared (first use in this function)|
||=== Build failed: 3 error(s), 0 warning(s) (0 minute(s), 0 second(s)) ===|
*/

/*answer
each instruction in a c program is written as a separate statement and end with a semicolon
the correct statement is
int main()
{
	int a;
    float b;
    int c;
	a=25;
	b=3.24;
	c=a+b*b-35;
}
