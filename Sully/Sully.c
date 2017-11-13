#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int main() {
int i = 5;
char XC=i+48;
char bufferc[20]="Sully_X.c";
bufferc[6]=XC;
int fd=open(bufferc,2561,438);
if (fd == -1){XC=i+47;bufferc[6]=XC;fd=open(bufferc,2561,438);}
char *s="#include <fcntl.h>%c#include <stdlib.h>%c#include <stdio.h>%cint main() {%cint i = %c;%cchar XC=i+48;%cchar bufferc[20]=%cSully_X.c%c;%cbufferc[6]=XC;%cint fd=open(bufferc,2561,438);%cif (fd == -1){XC=i+47;bufferc[6]=XC;fd=open(bufferc,2561,438);}%cchar *s=%c%s%c;%cdprintf(fd,s,10,10,10,10,XC,10,10,34,34,10,10,10,10,34,s,34,10,10,34,34,10,10,10,10,10,34,34,10,10,10);%cchar sysbuf[50]=%cclang -Wall -Wextra -Werror Sully_X.c -o Sully_X%c;%csysbuf[34]=XC;%csysbuf[47]=XC;%csystem(sysbuf);%cif (i <= 1){return (0);}%cchar sysbuf2[50]=%c./Sully_X%c;%csysbuf2[8]=XC;%csystem(sysbuf2);}%c";
dprintf(fd,s,10,10,10,10,XC,10,10,34,34,10,10,10,10,34,s,34,10,10,34,34,10,10,10,10,10,34,34,10,10,10);
char sysbuf[50]="clang -Wall -Wextra -Werror Sully_X.c -o Sully_X";
sysbuf[34]=XC;
sysbuf[47]=XC;
system(sysbuf);
if (i <= 1){return (0);}
char sysbuf2[50]="./Sully_X";
sysbuf2[8]=XC;
system(sysbuf2);}
