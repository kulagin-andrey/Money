#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task.h"

int main()
{
	int rub,kop, result;
	printf("Enter your money (R,K)\n");
	result = scanf("(%d,%d)", &rub, &kop);
	if (result < 2)
	{
		printf("Not valid data\n");
		return 1;
	}
	printf("You have %d rubles and %d kops\n",
		getNormalRub(rub, kop),
		getNormalKop(rub, kop));
	return 0;
}