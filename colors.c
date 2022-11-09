#include <stdio.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[1;31m"
#define KGRN  "\x1B[1;32m"
#define KYEL  "\x1B[1;33m"
#define KBLU  "\x1B[1;34m"
#define KMAG  "\x1B[1;35m"
#define KCYN  "\x1B[1;36m"
#define KWHT  "\x1B[1;37m"

/**
 * main - prints out colors
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("Useful colors\n");
	printf("%sNormal%s\n", KNRM, KNRM);
	printf("%sRed%s\n", KRED, KNRM);
	printf("%sGreen%s\n", KGRN, KNRM);
	printf("%sYellow%s\n", KYEL, KNRM);
	printf("%sBlue%s\n", KBLU, KNRM);
	printf("%sMaganate%s\n", KMAG, KNRM);
	printf("%sCyan%s\n", KCYN, KNRM);
	printf("%sWhite%s\n", KWHT, KNRM);
	return (0);
}
