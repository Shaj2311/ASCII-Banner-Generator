#include "art.c"
#include <stdio.h>

int main()
{
	//printf("%s", A_ART);
	//printf("\033[%dA", ART_HEIGHT);
	//clear screen
	printf("\033[H\033[2J");
	printf("%s%s%s", A_ART, B_ART, C_ART);
}
