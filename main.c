#include <stdio.h>
#include <stdlib.h>
char *proverb="All that glitters is not gold";
void setPointer(char *q)
{
	q=proverb;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *p="zzz";
	setPointer(p);
	printf("%s\n",p);

	return 0;
	
}
