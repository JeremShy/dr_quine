/*
	Commentaire
*/
#include <stdio.h>
#include <fcntl.h>
#define DEF1 DEF1
#define DEF2 "/*%c	Commentaire%c*/%c#include <stdio.h>%c#include <fcntl.h>%c#define DEF1 DEF1%c#define DEF2 %c%s%c%c#define DEFMAIN int main(){char *s=DEF2;int fd=open(%cGrace_kid.c%c,513,666);dprintf(fd,s,10,10,10,10,10,10,34,s,34,10,34,34,10,10);}%cDEFMAIN%c"
#define DEFMAIN int main(){char *s=DEF2;int fd=open("Grace_kid.c",513,666);dprintf(fd,s,10,10,10,10,10,10,34,s,34,10,34,34,10,10);}
DEFMAIN
