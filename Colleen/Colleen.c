#include <stdio.h>
/*
	Example
*/
void foo() {}
int main() {
/*
	Second example
*/
foo();
char *s = "#include <stdio.h>%c/*%c	Example%c*/%cvoid foo() {}%cint main() {%c/*%c	Second example%c*/%cfoo();%cchar *s = %c%s%c;%cprintf(s,10,10,10,10,10,10,10,10,10,10,34,s,34,10,10);}%c";
printf(s,10,10,10,10,10,10,10,10,10,10,34,s,34,10,10);}
